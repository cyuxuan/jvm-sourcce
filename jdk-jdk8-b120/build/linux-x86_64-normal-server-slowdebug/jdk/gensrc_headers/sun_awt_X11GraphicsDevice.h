/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_X11GraphicsDevice */

#ifndef _Included_sun_awt_X11GraphicsDevice
#define _Included_sun_awt_X11GraphicsDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_X11GraphicsDevice_TYPE_RASTER_SCREEN
#define sun_awt_X11GraphicsDevice_TYPE_RASTER_SCREEN 0L
#undef sun_awt_X11GraphicsDevice_TYPE_PRINTER
#define sun_awt_X11GraphicsDevice_TYPE_PRINTER 1L
#undef sun_awt_X11GraphicsDevice_TYPE_IMAGE_BUFFER
#define sun_awt_X11GraphicsDevice_TYPE_IMAGE_BUFFER 2L
/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11GraphicsDevice_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    getDisplay
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sun_awt_X11GraphicsDevice_getDisplay
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    getNumConfigs
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_X11GraphicsDevice_getNumConfigs
  (JNIEnv *, jobject, jint);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    getConfigVisualId
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_X11GraphicsDevice_getConfigVisualId
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    getConfigDepth
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_X11GraphicsDevice_getConfigDepth
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    getConfigColormap
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_sun_awt_X11GraphicsDevice_getConfigColormap
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    isDBESupported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_sun_awt_X11GraphicsDevice_isDBESupported
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    getDoubleBufferVisuals
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11GraphicsDevice_getDoubleBufferVisuals
  (JNIEnv *, jobject, jint);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    enterFullScreenExclusive
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11GraphicsDevice_enterFullScreenExclusive
  (JNIEnv *, jclass, jlong);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    exitFullScreenExclusive
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11GraphicsDevice_exitFullScreenExclusive
  (JNIEnv *, jclass, jlong);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    initXrandrExtension
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_sun_awt_X11GraphicsDevice_initXrandrExtension
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    getCurrentDisplayMode
 * Signature: (I)Ljava/awt/DisplayMode;
 */
JNIEXPORT jobject JNICALL Java_sun_awt_X11GraphicsDevice_getCurrentDisplayMode
  (JNIEnv *, jclass, jint);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    enumDisplayModes
 * Signature: (ILjava/util/ArrayList;)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11GraphicsDevice_enumDisplayModes
  (JNIEnv *, jclass, jint, jobject);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    configDisplayMode
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11GraphicsDevice_configDisplayMode
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     sun_awt_X11GraphicsDevice
 * Method:    resetNativeData
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11GraphicsDevice_resetNativeData
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
