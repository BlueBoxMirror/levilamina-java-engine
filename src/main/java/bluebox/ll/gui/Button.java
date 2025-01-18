package bluebox.ll.gui;

import bluebox.ll.entity.Player;

import java.util.function.Consumer;

public class Button {
    public enum ImageType{
        PATH("path"),
        URL("url");
        ImageType(String type){
            this.type=type;
        }
        public final String type;
    }
    public Button(){
        this.text="";
        this.image="";
        this.type=ImageType.PATH;
        this.onClick=(e)->{};
    }
    public Button(String text, String image,ImageType type, Consumer<Player> onClick){
        this.text=text;
        this.image=image;
        this.type=type;
        this.onClick=onClick;
    }
    public String text;
    public ImageType type;
    public String image;
    public Consumer<Player> onClick;
}
