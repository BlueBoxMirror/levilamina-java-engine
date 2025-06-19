package bluebox.ll.command.param;

final public class CommandFlag {
    public static final int None                         = 0;
    public static final int UsageTest                    = 1 << 0;
    public static final int HiddenFromCommandBlockOrigin = 1 << 1;
    public static final int HiddenFromPlayerOrigin       = 1 << 2;
    public static final int HiddenFromAutomationOrigin   = 1 << 3;
    public static final int SyncLocal                    = 1 << 4;
    public static final int ExecuteDisallowed            = 1 << 5;
    public static final int TypeMessage                  = 1 << 6;
    public static final int NotCheat                     = 1 << 7;
    public static final int Async                        = 1 << 8;
    public static final int NoEditor                     = 1 << 9;
    public static final int Hidden                       = HiddenFromPlayerOrigin | HiddenFromCommandBlockOrigin;
    public static final int Removed                      = Hidden | HiddenFromAutomationOrigin;
}
