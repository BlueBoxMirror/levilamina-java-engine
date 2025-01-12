package bluebox.ll.util.nbt.detail;

import bluebox.ll.util.nbt.*;
import java.text.NumberFormat;
import java.text.ParsePosition;
import java.util.ArrayList;
import java.util.Base64;
import java.util.function.BiConsumer;

public class SnbtParseImpl {
    static boolean startsWith(StringBuilder s,String prefix){
        return s.length()>=prefix.length() && s.substring(0,prefix.length()).equals(prefix);
    }
    public static Tag parseSnbtValue(StringBuilder s){
        skipWhitespace(s);
        Tag res = parseSnbtValueNonSkip(s);
        skipWhitespace(s);
        return res;
    }
    static Tag parseSnbtValueNonSkip(StringBuilder s){
        if (s.isEmpty()) throw new IllegalArgumentException("Empty string");
        switch (s.charAt(0)) {
            case 't':
                if (startsWith(s,"true")) {
                    s.delete(0,4);
                    return new TagByte((byte) 1);
                }
                break;
            case 'f':
                if (startsWith(s,"false")) {
                    s.delete(0,5);
                    return new TagByte((byte) 0);
                }
                break;
            case 'n':
                if (startsWith(s,"null")) {
                    s.delete(0,4);
                    return new TagEnd();
                }
                break;
            case ']':
            case '}':
                s.deleteCharAt(0);
                throw new IllegalArgumentException("Unclosed bracket");
            case (char)-1:
            case '\0':
                throw new IllegalArgumentException("Unexpected eof encountered");
            case '-':
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                return parseNumber(s);
            case '[':
                return parseList(s);
            case '{':
                return parseCompound(s);
            default:
                break;
        }
        return new TagString(parseString(s));
    }
    static char get(StringBuilder s){
        if (s.isEmpty()) return '\0';
        char c = s.charAt(0);
        s.deleteCharAt(0);
        return c;
    }
    static Tag parseCompound(StringBuilder s){
        get(s);
        skipWhitespace(s);
        if (s.charAt(0)=='}') {
            s.deleteCharAt(0);
            return new TagCompound();
        }
        TagCompound res=new TagCompound();
        while (!s.isEmpty()) {
            skipWhitespace(s);
            if (s.charAt(0)=='}') {
                s.deleteCharAt(0);
                return res;
            }
            String key = parseString(s);
            skipWhitespace(s);
            char p = get(s);
            if (p != ':' && p != '=') {
                throw new IllegalArgumentException("Illegal key value separator");
            }
            Tag value = parseSnbtValue(s);
            res.put(key,value);

            switch (s.charAt(0)) {
                case '}':
                    s.deleteCharAt(0);
                    return res;
                case ',':
                    s.deleteCharAt(0);
                default:
                    break;
            }
        }
        throw new IllegalArgumentException("Unclosed bracket");
    }
    static boolean isTrivialNbtStringChar(char c){
        return Character.isLetterOrDigit(c) || c == '-' || c == '+' || c == '_' || c == '.';
    }
    static int getCodePoint(StringBuilder s){
        int codepoint = 0;

        for (int factor : new int[]{12, 8, 4, 0}) {
            char current = get(s);

            if (current >= '0' && current <= '9') {
                codepoint += ((current) - 0x30) << factor;
            } else if (current >= 'A' && current <= 'F') {
                codepoint += (current - 0x37) << factor;
            } else if (current >= 'a' && current <= 'f') {
                codepoint += (current - 0x57) << factor;
            } else {
                throw new IllegalArgumentException("Not a unicode encoded hex");
            }
        }

        return codepoint;
    }
    static String parseString(StringBuilder s){
        char starts = s.charAt(0);

        if (starts != '\"' && starts != '\'' && !isTrivialNbtStringChar(starts)) {
            throw new IllegalArgumentException("Illegal omitted quotes string");
        }
        StringBuilder res=new StringBuilder();

        if (starts == '\"' || starts == '\'') {
            s.deleteCharAt(0);
        } else {
            while (!s.isEmpty()) {
                char fc = s.charAt(0);
                if (isTrivialNbtStringChar(fc)) {
                    s.deleteCharAt(0);
                    res.append(fc);
                } else {
                    return res.toString();
                }
            }
        }

        while (!s.isEmpty()) {
            // get next character

            char current = get(s);

            switch (current) {

                // closing quote
                case '\"': {
                    if (starts == '\"') {
                        if (startsWith(s," /*BASE64*/")) {
                            return Base64.getEncoder().encodeToString(s.toString().getBytes());
                        }
                        return res.toString();
                    }
                    res.append('\"');
                } break;
                case '\'': {
                    if (starts == '\'') {
                        return res.toString();
                    }
                    res.append('\'');
                } break;

                // escapes
                case '\\': {
                    switch (get(s)) {
                        // multiline string
                        case '\n':
                        case '\r':
                            skipWhitespace(s);
                        break;

                        // quotation mark
                        case '\"': {
                            if (starts == '\"') {
                                res.append('\"');
                            } else {
                                throw new IllegalArgumentException("Quote escape not match");
                            }
                        } break;
                        case '\'': {
                            if (starts == '\'') {
                                res.append('\'');
                            } else {
                                throw new IllegalArgumentException("Quote escape not match");
                            }
                        } break;
                        // reverse solidus
                        case '\\':
                            res.append('\\');
                            break;
                        // solidus
                        case '/':
                            res.append('/');
                            break;
                        // backspace
                        case 'b':
                            res.append('\b');
                            break;
                        // form feed
                        case 'f':
                            res.append('\f');
                            break;
                        // line feed
                        case 'n':
                            res.append('\n');
                            break;
                        // carriage return
                        case 'r':
                            res.append('\r');
                            break;
                        // tab
                        case 't':
                        case 'v':
                            res.append('\t');
                            break;

                        // unicode escapes
                        case 'u': {
                            int codepoint1= getCodePoint(s);
                            int codepoint = codepoint1; // start with codepoint1

                            // check if code point is a high surrogate
                            if (0xD800 <= codepoint1 && codepoint1 <= 0xDBFF) {
                                // expect next /uxxxx entry
                                if (get(s) == '\\' && get(s) == 'u') {
                                    int codepoint2=getCodePoint(s);
                                    // check if codepoint2 is a low surrogate
                                    if ((0xDC00 <= codepoint2 && codepoint2 <= 0xDFFF)) {
                                        // overwrite codepoint
                                        codepoint = (
                                                // high surrogate occupies the most significant 22 bits
                                                (codepoint1 << 10)
                                        // low surrogate occupies the least significant 15 bits
                                        + codepoint2
                                                // there is still the 0xD800, 0xDC00 and 0x10000 noise
                                                // in the result, so we have to subtract with:
                                                // (0xD800 << 10) + DC00 - 0x10000 = 0x35FDC00
                                                - 0x35FDC00
                            );
                                    } else {
                                        throw new IllegalArgumentException("Utf8 codepoint2 not in range");
                                    }
                                } else {
                                    throw new IllegalArgumentException("Utf8 codepoint2 missing");
                                }
                            } else {
                                if (0xDC00 <= codepoint1 && codepoint1 <= 0xDFFF) {
                                    throw new IllegalArgumentException("Utf8 codepoint1 missing");
                                }
                            }

                            // translate codepoint into bytes
                            if (codepoint < 0x80) {
                                // 1-byte characters: 0xxxxxxx (ASCII)
                                res.append((char)codepoint);
                            } else if (codepoint <= 0x7FF) {
                                // 2-byte characters: 110xxxxx 10xxxxxx
                                res.append((char)(0xC0 | codepoint >> 6));
                                res.append((char)(0x80 | (codepoint & 0x3F)));
                            } else if (codepoint <= 0xFFFF) {
                                // 3-byte characters: 1110xxxx 10xxxxxx 10xxxxxx
                                res.append((char)(0xE0 | (codepoint >> 12)));
                                res.append((char)(0x80 | ((codepoint >> 6) & 0x3F)));
                                res.append((char)(0x80 | (codepoint & 0x3F)));
                            } else {
                                // 4-byte characters: 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
                                res.append((char)(0xF0 | (codepoint >> 18)));
                                res.append((char)(0x80 | (codepoint >> 12) & 0x3F));
                                res.append((char)(0x80 | (codepoint >> 6) & 0x3F));
                                res.append((char)(0x80 | (codepoint & 0x3F)));
                            }
                        } break;

                        // other characters after escape
                        default:
                            throw new IllegalArgumentException("Illegal escape");
                    }
                } break;
                default:
                    res.append(current);
                    break;
            }
        }
        throw new IllegalArgumentException("Illegal Utf8 character");
    }
    static Tag parseByteArray(StringBuilder s){
        ArrayList<Byte> res=parseNumArray(s,TagByte.class, (arr,num)->{
            arr.add(num.get());
        });
        return new TagByteArray(res.toArray(new Byte[0]));
    }
    static Tag parseIntArray(StringBuilder s){
        ArrayList<Integer> res=parseNumArray(s,TagInt.class, (arr,num)->{
            arr.add(num.get());
        });
        return new TagIntArray(res.toArray(new Integer[0]));
    }
    static Tag parseLongArray(StringBuilder s){
        ArrayList<Byte> res=parseNumArray(s,TagLong.class, (arr,num)->{
            long val=num.get();
            for (int j = 7; j >= 0; j--) {
                arr.add((byte) (val >> (8 * j)));
            }
        });
        return new TagByteArray(res.toArray(new Byte[0]));
    }
    static <T,H extends Tag> ArrayList<T> parseNumArray(StringBuilder s,Class<H> type, BiConsumer<ArrayList<T>,H> f){
        ArrayList<T> res=new ArrayList<>();
        while(!s.isEmpty()){
            skipWhitespace(s);
            if(s.charAt(0)==']'){
                s.deleteCharAt(0);
                return res;
            }
            {
                Tag value=parseNumber(s);
                if(!type.isInstance(value)) throw new IllegalArgumentException("Not the expected type");
                else f.accept(res,(H)value);
            }
            skipWhitespace(s);
            switch(s.charAt(0)){
                case ']':
                    s.deleteCharAt(0);
                    return res;
                case ',':
                    s.deleteCharAt(0);
                default:
                    break;
            }
        }
        throw new IllegalArgumentException("Unclosed bracket");
    }
    static Tag parseList(StringBuilder s){
        if (startsWith(s,"[ /*") && (s.length() > 7 && s.charAt(6) == '*' && s.charAt(7) == '/')) {
            s.delete(0,4);
        } else {
            s.deleteCharAt(0);
        }
        if (startsWith(s,"B;")) {
            s.delete(0,2);
            if (startsWith(s,"*/")) {
                s.delete(0,2);
            }
            return parseByteArray(s);
        } else if (startsWith(s,"I;")) {
            s.delete(0,2);
            if (startsWith(s,"*/")) {
                s.delete(0,2);
            }
            return parseIntArray(s);
        } else if (startsWith(s,"L;")) {
            s.delete(0,2);
            if (startsWith(s,"*/")) {
                s.delete(0,2);
            }
            return parseLongArray(s);
        }
        TagList res=new TagList();
        while (!s.isEmpty()) {
            skipWhitespace(s);
            if (s.charAt(0)==']') {
                s.deleteCharAt(0);
                return res;
            }
            res.add(parseSnbtValueNonSkip(s));
            skipWhitespace(s);
            switch (s.charAt(0)) {
                case ']':
                    s.deleteCharAt(0);
                    return res;
                case ',': {
                    s.deleteCharAt(0);
                }
                default:
                    break;
            }
        }
        throw new IllegalArgumentException("Unclosed bracket");
    }
    static Tag parseNumber(StringBuilder s){
        ParsePosition n=new ParsePosition(0);
        double res=0;
        res=stold(s,n);
        boolean isInt=true;
        for(int i=0;i<n.getIndex();i++){
            if(Character.digit(s.charAt(i),16)==-1 && s.charAt(i) != '-') isInt=false;
        }
        s.delete(0,n.getIndex());
        switch (s.charAt(0)) {
            case 'b':
            case 'B':
                s.deleteCharAt(0);
                if(res<Byte.MIN_VALUE || res>Byte.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagByte((byte)res);
            case 's':
            case 'S':
                s.deleteCharAt(0);
                if(res<Short.MIN_VALUE || res>Short.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagShort((short)res);
            case 'i':
            case 'I':
                s.deleteCharAt(0);
                if(res<Integer.MIN_VALUE || res>Integer.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagInt((int)res);
            case 'l':
            case 'L':
                s.deleteCharAt(0);
                if(res<Long.MIN_VALUE || res>Long.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagLong((long)res);
            case 'f':
            case 'F':
                s.deleteCharAt(0);
                return new TagFloat((float)res);
            case 'd':
            case 'D':
                s.deleteCharAt(0);
                return new TagDouble(res);
            default:
                break;
        }
        if (s.length() >= 6) switch (s.substring(0, 6)) {
            case " /*b*/":
            case " /*B*/":
                s.delete(0,6);
                if(res<Byte.MIN_VALUE || res>Byte.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagByte((byte)res);
            case " /*s*/":
            case " /*S*/":
                s.delete(0,6);
                if(res<Short.MIN_VALUE || res>Short.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagShort((short)res);
            case " /*i*/":
            case " /*I*/":
                s.delete(0,6);
                if(res<Integer.MIN_VALUE || res>Integer.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagInt((int)res);
            case " /*l*/":
            case " /*L*/":
                s.delete(0,6);
                if(res<Long.MIN_VALUE || res>Long.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
                return new TagLong((long)res);
            case " /*f*/":
            case " /*F*/":
                s.delete(0,6);
                return new TagFloat((float)res);
            case " /*d*/":
            case " /*D*/":
                s.delete(0,6);
                return new TagDouble(res);
            default:
                break;
        }
        if (isInt) {
            if(res<Integer.MIN_VALUE || res>Integer.MAX_VALUE) throw new IllegalArgumentException("Number out of range");
            return new TagInt((int)res);
        } else {
            return new TagDouble(res);
        }
    }
    static double stold(StringBuilder s, ParsePosition n){
        ParsePosition eptr=new ParsePosition(0);
        Number res=NumberFormat.getInstance().parse(s.toString(),eptr);
        if(eptr.getIndex()==0){
            throw new NumberFormatException("Not a number");
        }
        n.setIndex(eptr.getIndex());
        return res.doubleValue();
    }
    static void skipWhitespace(StringBuilder s){
        scanSpaces(s);
        while (s.length()>1 &&( s.charAt(0)=='/' || s.charAt(0)=='#' || s.charAt(0)==';' )) {
            s.deleteCharAt(0);
            scanComment(s);
            scanSpaces(s);
        }
    }
    static void scanSpaces(StringBuilder s){
        int i=0;
        while(i < s.length() && Character.isWhitespace(s.charAt(i++)));
        if(i-1<0) return;
        s.delete(0,Math.min(i-1,s.length()));
    }
    static void scanComment(StringBuilder s){
        int i=0;
        switch (s.charAt(i++)) {
            // multi-line comments skip input until */ is read
            case '*': {
                while (i < s.length()) {
                    switch (s.charAt(i++)) {
                        case (char)-1:
                        case '\0':
                            throw new IllegalArgumentException("Unexpected eof encountered");
                        case '*': {
                            switch (s.charAt(i)) {
                                case '/':
                                    s.delete(0,Math.min(i + 1, s.length()));
                                    return;

                                default:
                                    continue;
                            }
                        }

                        default:
                            continue;
                    }
                }
                break;
            }
            default:
                // {
                //     // unexpected character after reading '/'
                //     return false;
                // }
                // // single-line comments skip input until a newline or EOF is read
                // case '/':
            {
                while (i < s.length()) {
                    switch (s.charAt(i++)) {
                        case '\n':
                        case '\r':
                        case (char)-1:
                        case '\0':
                            s.delete(0,Math.min(i, s.length()));
                            return ;

                        default:
                            break;
                    }
                }
                break;
            }
        }
        throw new IllegalArgumentException("Unterminated comment");
    }
}
