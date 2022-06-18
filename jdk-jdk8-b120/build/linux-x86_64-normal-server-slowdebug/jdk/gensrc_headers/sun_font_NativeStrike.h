/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_font_NativeStrike */

#ifndef _Included_sun_font_NativeStrike
#define _Included_sun_font_NativeStrike
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_font_NativeStrike_INTMASK
#define sun_font_NativeStrike_INTMASK 4294967295LL
#undef sun_font_NativeStrike_complexTX
#define sun_font_NativeStrike_complexTX 124L
/*
 * Class:     sun_font_NativeStrike
 * Method:    createScalerContext
 * Signature: ([BID)J
 */
JNIEXPORT jlong JNICALL Java_sun_font_NativeStrike_createScalerContext
  (JNIEnv *, jobject, jbyteArray, jint, jdouble);

/*
 * Class:     sun_font_NativeStrike
 * Method:    getMaxGlyph
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sun_font_NativeStrike_getMaxGlyph
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sun_font_NativeStrike
 * Method:    createNullScalerContext
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sun_font_NativeStrike_createNullScalerContext
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif