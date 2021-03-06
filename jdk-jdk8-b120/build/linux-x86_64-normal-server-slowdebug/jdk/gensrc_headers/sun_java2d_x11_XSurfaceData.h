/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_java2d_x11_XSurfaceData */

#ifndef _Included_sun_java2d_x11_XSurfaceData
#define _Included_sun_java2d_x11_XSurfaceData
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_java2d_x11_XSurfaceData_LOOP_UNKNOWN
#define sun_java2d_x11_XSurfaceData_LOOP_UNKNOWN 0L
#undef sun_java2d_x11_XSurfaceData_LOOP_FOUND
#define sun_java2d_x11_XSurfaceData_LOOP_FOUND 1L
#undef sun_java2d_x11_XSurfaceData_LOOP_NOTFOUND
#define sun_java2d_x11_XSurfaceData_LOOP_NOTFOUND 2L
/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    initOps
 * Signature: (Lsun/awt/X11ComponentPeer;Lsun/awt/X11GraphicsConfig;I)V
 */
JNIEXPORT void JNICALL Java_sun_java2d_x11_XSurfaceData_initOps
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    XCreateGC
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_sun_java2d_x11_XSurfaceData_XCreateGC
  (JNIEnv *, jclass, jlong);

/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    XResetClip
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_java2d_x11_XSurfaceData_XResetClip
  (JNIEnv *, jclass, jlong);

/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    XSetClip
 * Signature: (JIIIILsun/java2d/pipe/Region;)V
 */
JNIEXPORT void JNICALL Java_sun_java2d_x11_XSurfaceData_XSetClip
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint, jobject);

/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    flushNativeSurface
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_java2d_x11_XSurfaceData_flushNativeSurface
  (JNIEnv *, jobject);

/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    isDrawableValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_sun_java2d_x11_XSurfaceData_isDrawableValid
  (JNIEnv *, jobject);

/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    setInvalid
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_java2d_x11_XSurfaceData_setInvalid
  (JNIEnv *, jobject);

/*
 * Class:     sun_java2d_x11_XSurfaceData
 * Method:    XSetGraphicsExposures
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_sun_java2d_x11_XSurfaceData_XSetGraphicsExposures
  (JNIEnv *, jclass, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
