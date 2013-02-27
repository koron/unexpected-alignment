#include <jni.h>
#include <stdio.h>

static alignment0(int *a, int n)
{
    *a = n;
}

jstring JNICALL
Java_net_kaoriya_qb_unexpected_1alignment_Native_alignment1(
        JNIEnv *env, jclass clazz)
{
    jstring retval = NULL;
    int a[] = { 0, 0 };
    int *p0, *p1;
    char buf[256];

    p0 = &a[0];
    p1 = ((int *)((char *)p0 + 1));
    alignment0(p1, 0x12345678);

    sprintf(buf, "a[0]=0x%08x a[1]=0x%08x\np0=%p p1=%p\n", a[0], a[1], p0, p1);

    return (*env)->NewStringUTF(env, buf);
}
