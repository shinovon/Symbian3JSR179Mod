/*
 * Description: Automatically generated JNI lookup file. Do not modify manually.
 */

#include "javasymbianoslayer.h"
typedef void (*TFunc)();
#include "com_nokia_mj_impl_location_LandmarkStoreManager.h"
#include "com_nokia_mj_impl_location_LAPIManager.h"
#include "com_nokia_mj_impl_location_LocationProviderImpl.h"
#include "com_nokia_mj_impl_location_Positioner.h"
#include "javax_microedition_location_Coordinates.h"
#include "javax_microedition_location_Landmark.h"
#include "javax_microedition_location_LandmarkStore.h"
#include "javax_microedition_location_Location.h"
#include "javax_microedition_location_LocationProvider.h"
#include "javax_microedition_location_Orientation.h"
const FuncTable funcTable[] = {
   { "Java_com_nokia_mj_impl_location_LAPIManager__1createFunctionSource", (unsigned int) Java_com_nokia_mj_impl_location_LAPIManager__1createFunctionSource},
   { "Java_com_nokia_mj_impl_location_LAPIManager__1dispose", (unsigned int) Java_com_nokia_mj_impl_location_LAPIManager__1dispose},
   { "Java_com_nokia_mj_impl_location_LandmarkStoreManager__1createNativePeer", (unsigned int) Java_com_nokia_mj_impl_location_LandmarkStoreManager__1createNativePeer},
   { "Java_com_nokia_mj_impl_location_LandmarkStoreManager__1createStore", (unsigned int) Java_com_nokia_mj_impl_location_LandmarkStoreManager__1createStore},
   { "Java_com_nokia_mj_impl_location_LandmarkStoreManager__1deleteStore", (unsigned int) Java_com_nokia_mj_impl_location_LandmarkStoreManager__1deleteStore},
   { "Java_com_nokia_mj_impl_location_LandmarkStoreManager__1dispose", (unsigned int) Java_com_nokia_mj_impl_location_LandmarkStoreManager__1dispose},
   { "Java_com_nokia_mj_impl_location_LandmarkStoreManager__1listStores", (unsigned int) Java_com_nokia_mj_impl_location_LandmarkStoreManager__1listStores},
   { "Java_com_nokia_mj_impl_location_LandmarkStoreManager__1openStore", (unsigned int) Java_com_nokia_mj_impl_location_LandmarkStoreManager__1openStore},
   { "Java_com_nokia_mj_impl_location_LandmarkStoreManager__1removeStore", (unsigned int) Java_com_nokia_mj_impl_location_LandmarkStoreManager__1removeStore},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1addProxmityListener", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1addProxmityListener},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1createFunctionSource", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1createFunctionSource},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1createNativeProximityListener", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1createNativeProximityListener},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1createProvider", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1createProvider},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1deleteTrigger", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1deleteTrigger},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1dispose", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1dispose},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1disposeNativeProximityListener", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1disposeNativeProximityListener},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1getAddressInfo", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1getAddressInfo},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1getLastKnownLocation", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1getLastKnownLocation},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1getQualifiedCoordinates", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1getQualifiedCoordinates},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1getSatelliteData", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1getSatelliteData},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1getSpeedAndCourse", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1getSpeedAndCourse},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1isMonitoringNotActive", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1isMonitoringNotActive},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1selectModule", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1selectModule},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1startTracking", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1startTracking},
   { "Java_com_nokia_mj_impl_location_LocationProviderImpl__1stopTracking", (unsigned int) Java_com_nokia_mj_impl_location_LocationProviderImpl__1stopTracking},
   { "Java_com_nokia_mj_impl_location_Positioner__1cancel", (unsigned int) Java_com_nokia_mj_impl_location_Positioner__1cancel},
   { "Java_com_nokia_mj_impl_location_Positioner__1createPositioner", (unsigned int) Java_com_nokia_mj_impl_location_Positioner__1createPositioner},
   { "Java_com_nokia_mj_impl_location_Positioner__1dispose", (unsigned int) Java_com_nokia_mj_impl_location_Positioner__1dispose},
   { "Java_com_nokia_mj_impl_location_Positioner__1getLocation", (unsigned int) Java_com_nokia_mj_impl_location_Positioner__1getLocation},
   { "Java_javax_microedition_location_Coordinates__1azimuthTo", (unsigned int) Java_javax_microedition_location_Coordinates__1azimuthTo},
   { "Java_javax_microedition_location_Coordinates__1distance", (unsigned int) Java_javax_microedition_location_Coordinates__1distance},
   { "Java_javax_microedition_location_LandmarkStore__1addCategory", (unsigned int) Java_javax_microedition_location_LandmarkStore__1addCategory},
   { "Java_javax_microedition_location_LandmarkStore__1addLandmark", (unsigned int) Java_javax_microedition_location_LandmarkStore__1addLandmark},
   { "Java_javax_microedition_location_LandmarkStore__1deleteCategory", (unsigned int) Java_javax_microedition_location_LandmarkStore__1deleteCategory},
   { "Java_javax_microedition_location_LandmarkStore__1deleteLandmark", (unsigned int) Java_javax_microedition_location_LandmarkStore__1deleteLandmark},
   { "Java_javax_microedition_location_LandmarkStore__1dispose", (unsigned int) Java_javax_microedition_location_LandmarkStore__1dispose},
   { "Java_javax_microedition_location_LandmarkStore__1getLandmarks", (unsigned int) Java_javax_microedition_location_LandmarkStore__1getLandmarks},
   { "Java_javax_microedition_location_LandmarkStore__1getLandmarksFromArea", (unsigned int) Java_javax_microedition_location_LandmarkStore__1getLandmarksFromArea},
   { "Java_javax_microedition_location_LandmarkStore__1getLandmarksFromCategory", (unsigned int) Java_javax_microedition_location_LandmarkStore__1getLandmarksFromCategory},
   { "Java_javax_microedition_location_LandmarkStore__1listCategories", (unsigned int) Java_javax_microedition_location_LandmarkStore__1listCategories},
   { "Java_javax_microedition_location_LandmarkStore__1removeLandmarkFromCategory", (unsigned int) Java_javax_microedition_location_LandmarkStore__1removeLandmarkFromCategory},
   { "Java_javax_microedition_location_LandmarkStore__1updateLandmark", (unsigned int) Java_javax_microedition_location_LandmarkStore__1updateLandmark},
   { "Java_javax_microedition_location_Landmark__1createNativePeer", (unsigned int) Java_javax_microedition_location_Landmark__1createNativePeer},
   { "Java_javax_microedition_location_Landmark__1dispose", (unsigned int) Java_javax_microedition_location_Landmark__1dispose},
   { "Java_javax_microedition_location_Landmark__1getAddressInfo", (unsigned int) Java_javax_microedition_location_Landmark__1getAddressInfo},
   { "Java_javax_microedition_location_Landmark__1getCoordinates", (unsigned int) Java_javax_microedition_location_Landmark__1getCoordinates},
   { "Java_javax_microedition_location_Landmark__1getDescription", (unsigned int) Java_javax_microedition_location_Landmark__1getDescription},
   { "Java_javax_microedition_location_Landmark__1getName", (unsigned int) Java_javax_microedition_location_Landmark__1getName},
   { "Java_javax_microedition_location_Landmark__1setAddressInfo", (unsigned int) Java_javax_microedition_location_Landmark__1setAddressInfo},
   { "Java_javax_microedition_location_Landmark__1setCoordinates", (unsigned int) Java_javax_microedition_location_Landmark__1setCoordinates},
   { "Java_javax_microedition_location_Landmark__1setDescription", (unsigned int) Java_javax_microedition_location_Landmark__1setDescription},
   { "Java_javax_microedition_location_Landmark__1setName", (unsigned int) Java_javax_microedition_location_Landmark__1setName},
   { "Java_javax_microedition_location_Orientation__1createNativeHandle", (unsigned int) Java_javax_microedition_location_Orientation__1createNativeHandle},
   { "Java_javax_microedition_location_Orientation__1dispose", (unsigned int) Java_javax_microedition_location_Orientation__1dispose},
   { "Java_javax_microedition_location_Orientation__1getAzimuthData", (unsigned int) Java_javax_microedition_location_Orientation__1getAzimuthData},
   { "Java_javax_microedition_location_Orientation__1getData", (unsigned int) Java_javax_microedition_location_Orientation__1getData}
};

IMPORT_C TFunc jni_lookup(const char* name);
EXPORT_C TFunc jni_lookup(const char* name) {
    return (TFunc)findMethod(name, funcTable, sizeof(funcTable)/sizeof(FuncTable));
}
