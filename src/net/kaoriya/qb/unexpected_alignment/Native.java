package net.kaoriya.qb.unexpected_alignment;

public final class Native
{
    static {
        System.loadLibrary("alignment");
    }

    private static native String alignment1();

    public static String alignmentTest()
    {
        return alignment1();
    }
}
