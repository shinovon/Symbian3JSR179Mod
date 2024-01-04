/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nokia_mj_impl_location_LandmarkStoreManager */

#ifndef _Included_com_nokia_mj_impl_location_LandmarkStoreManager
#define _Included_com_nokia_mj_impl_location_LandmarkStoreManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nokia_mj_impl_location_LandmarkStoreManager
 * Method:    _createNativePeer
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LandmarkStoreManager__1createNativePeer
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_nokia_mj_impl_location_LandmarkStoreManager
 * Method:    _openStore
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LandmarkStoreManager__1openStore
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_nokia_mj_impl_location_LandmarkStoreManager
 * Method:    _createStore
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LandmarkStoreManager__1createStore
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_nokia_mj_impl_location_LandmarkStoreManager
 * Method:    _deleteStore
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_nokia_mj_impl_location_LandmarkStoreManager__1deleteStore
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_nokia_mj_impl_location_LandmarkStoreManager
 * Method:    _removeStore
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_nokia_mj_impl_location_LandmarkStoreManager__1removeStore
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_nokia_mj_impl_location_LandmarkStoreManager
 * Method:    _listStores
 * Signature: (II[I)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_nokia_mj_impl_location_LandmarkStoreManager__1listStores
  (JNIEnv *, jobject, jint, jint, jintArray);

/*
 * Class:     com_nokia_mj_impl_location_LandmarkStoreManager
 * Method:    _dispose
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_nokia_mj_impl_location_LandmarkStoreManager__1dispose
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif