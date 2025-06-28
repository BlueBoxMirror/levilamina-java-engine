package bluebox.ll.util;

import com.google.gson.Gson;
import com.google.gson.annotations.Expose;
import com.google.gson.reflect.TypeToken;
import org.jetbrains.annotations.NotNull;

import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Objects;
import java.util.StringJoiner;
import java.util.StringTokenizer;

public class I18n {
    private I18n(String defaultLocalCode){
        this.defaultLocalCode=defaultLocalCode;
    }
    public final String defaultLocalCode;
    public static native String getDefaultLocaleCode();
    private static final Gson gson=new Gson();
    private final HashMap<String, HashMap<String, String>> translations = new HashMap<>();
    public String get(String key){
        return translations.getOrDefault(defaultLocalCode, new HashMap<>()).getOrDefault(key, key);
    }
    public String get(String localeCode, String key){

        return translations.getOrDefault(localeCode, new HashMap<>()).getOrDefault(key, key);
    }
    public String tr(String key, Object... args){
        return String.format(get(key), args);
    }
    public String trl(String localeCode, String key, Object... args){
        return String.format(get(localeCode, key), args);
    }
    public void set(String localeCode,String key, String value){
        if(!translations.containsKey(localeCode)){
            translations.put(localeCode, new HashMap<>());
        }
        translations.get(localeCode).put(key, value);
    }
    public static @NotNull I18n load(@NotNull File dir,String defaultLocaleCode) throws IOException {
        I18n result = new I18n(defaultLocaleCode);
        for (File file : Objects.requireNonNull(dir.listFiles())) {
            if (file.isFile() && file.getName().endsWith(".json")) {
                String localeCode= file.getName().substring(0, file.getName().length() - 5);
                result.translations.put(localeCode, gson.fromJson(new FileReader(file, StandardCharsets.UTF_8), new TypeToken<HashMap<String, String>>(){}.getType()));
            }
        }
        return result;
    }
    public static @NotNull I18n load(@NotNull File dir) throws IOException {
        return load(dir, getDefaultLocaleCode());
    }
}
