/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sun_media_sound_MidiInDeviceProvider */

#ifndef _Included_com_sun_media_sound_MidiInDeviceProvider
#define _Included_com_sun_media_sound_MidiInDeviceProvider
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sun_media_sound_MidiInDeviceProvider
 * Method:    nGetNumDevices
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_sun_media_sound_MidiInDeviceProvider_nGetNumDevices
  (JNIEnv *, jclass);

/*
 * Class:     com_sun_media_sound_MidiInDeviceProvider
 * Method:    nGetName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_media_sound_MidiInDeviceProvider_nGetName
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_sun_media_sound_MidiInDeviceProvider
 * Method:    nGetVendor
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_media_sound_MidiInDeviceProvider_nGetVendor
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_sun_media_sound_MidiInDeviceProvider
 * Method:    nGetDescription
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_media_sound_MidiInDeviceProvider_nGetDescription
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_sun_media_sound_MidiInDeviceProvider
 * Method:    nGetVersion
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_sun_media_sound_MidiInDeviceProvider_nGetVersion
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
