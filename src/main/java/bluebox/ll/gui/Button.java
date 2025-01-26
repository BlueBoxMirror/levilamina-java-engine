package bluebox.ll.gui;

import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.Nullable;

public class Button {
    public enum ImageType{
        path,
        url
    }
    @NotNull public String text="";
    @Nullable public String imagePath;
    @NotNull public ImageType imageType=ImageType.path;
    public Button(@NotNull String text, @Nullable String imagePath, @NotNull ImageType imageType){
        this.text=text;
        this.imagePath=imagePath;
        this.imageType=imageType;
    }
    public Button(@NotNull String text){
        this.text=text;
    }
}
