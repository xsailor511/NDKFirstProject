package richard.ztesoft.com.ndkfirstproject.ndk;

/**
 * Created by richard on 16/7/20.
 */
public class NDKTestLib {
    static {
        System.loadLibrary("ndk_test");
    }

    public native static String hello();
}
