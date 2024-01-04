/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nokia_mj_impl_location_LocationProviderImpl */

#ifndef _Included_com_nokia_mj_impl_location_LocationProviderImpl
#define _Included_com_nokia_mj_impl_location_LocationProviderImpl
#ifdef __cplusplus
extern "C" {
#endif
#undef com_nokia_mj_impl_location_LocationProviderImpl_AVAILABLE
#define com_nokia_mj_impl_location_LocationProviderImpl_AVAILABLE 1L
#undef com_nokia_mj_impl_location_LocationProviderImpl_TEMPORARILY_UNAVAILABLE
#define com_nokia_mj_impl_location_LocationProviderImpl_TEMPORARILY_UNAVAILABLE 2L
#undef com_nokia_mj_impl_location_LocationProviderImpl_OUT_OF_SERVICE
#define com_nokia_mj_impl_location_LocationProviderImpl_OUT_OF_SERVICE 3L
#undef com_nokia_mj_impl_location_LocationProviderImpl_ADDRESS_REQUIRED
#define com_nokia_mj_impl_location_LocationProviderImpl_ADDRESS_REQUIRED 1L
#undef com_nokia_mj_impl_location_LocationProviderImpl_COST_ALLOWED
#define com_nokia_mj_impl_location_LocationProviderImpl_COST_ALLOWED 2L
#undef com_nokia_mj_impl_location_LocationProviderImpl_ALTITUDE_REQUIRED
#define com_nokia_mj_impl_location_LocationProviderImpl_ALTITUDE_REQUIRED 4L
#undef com_nokia_mj_impl_location_LocationProviderImpl_SPEED_AND_COURSE_REQUIRED
#define com_nokia_mj_impl_location_LocationProviderImpl_SPEED_AND_COURSE_REQUIRED 8L
#undef com_nokia_mj_impl_location_LocationProviderImpl_NUM_ADDRESS_FIELDS
#define com_nokia_mj_impl_location_LocationProviderImpl_NUM_ADDRESS_FIELDS 17L
/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _dispose
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1dispose
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _createProvider
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1createProvider
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _addProxmityListener
 * Signature: (IIDDFF)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1addProxmityListener
  (JNIEnv *, jclass, jint, jint, jdouble, jdouble, jfloat, jfloat);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _createNativeProximityListener
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1createNativeProximityListener
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _disposeNativeProximityListener
 * Signature: (IIZ)V
 */
JNIEXPORT void JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1disposeNativeProximityListener
  (JNIEnv *, jclass, jint, jint, jboolean);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _isMonitoringNotActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1isMonitoringNotActive
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _deleteTrigger
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1deleteTrigger
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _createFunctionSource
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1createFunctionSource
  (JNIEnv *, jobject);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _selectModule
 * Signature: (IIIIIII[I)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1selectModule
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jint, jintArray);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _getQualifiedCoordinates
 * Signature: (I[D[F[Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1getQualifiedCoordinates
  (JNIEnv *, jobject, jint, jdoubleArray, jfloatArray, jobjectArray);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _getSpeedAndCourse
 * Signature: (I[F)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1getSpeedAndCourse
  (JNIEnv *, jobject, jint, jfloatArray);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _startTracking
 * Signature: (IIIII)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1startTracking
  (JNIEnv *, jobject, jint, jint, jint, jint, jint);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _stopTracking
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1stopTracking
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _getAddressInfo
 * Signature: (I[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1getAddressInfo
  (JNIEnv *, jobject, jint, jobjectArray);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _getLastKnownLocation
 * Signature: ([D[F[J)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1getLastKnownLocation
  (JNIEnv *, jclass, jdoubleArray, jfloatArray, jlongArray);

/*
 * Class:     com_nokia_mj_impl_location_LocationProviderImpl
 * Method:    _getSatelliteData
 * Signature: (I[I)J
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LocationProviderImpl__1getSatelliteData
  (JNIEnv *, jobject, jint, jintArray);

#ifdef __cplusplus
}
#endif
#endif