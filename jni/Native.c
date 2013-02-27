#include <jni.h>
#include <stdio.h>

jstring JNICALL
Java_net_kaoriya_qb_unexpected_1alignment_Native_alignment1(
        JNIEnv *env, jclass clazz)
{
    jstring retval = NULL;
    retval = (*env)->NewStringUTF(env, "");
    return retval;
}
