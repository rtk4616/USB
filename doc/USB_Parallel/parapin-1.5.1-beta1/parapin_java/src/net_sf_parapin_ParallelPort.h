/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_sf_parapin_ParallelPort */

#ifndef _Included_net_sf_parapin_ParallelPort
#define _Included_net_sf_parapin_ParallelPort
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_sf_parapin_ParallelPort
 * Method:    open0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_sf_parapin_ParallelPort_open0
  (JNIEnv *, jclass);

/*
 * Class:     net_sf_parapin_ParallelPort
 * Method:    configurePin0
 * Signature: (IIB)V
 */
JNIEXPORT void JNICALL Java_net_sf_parapin_ParallelPort_configurePin0
  (JNIEnv *, jclass, jint, jint, jbyte);

/*
 * Class:     net_sf_parapin_ParallelPort
 * Method:    logicLevelAtPin0
 * Signature: (II)B
 */
JNIEXPORT jbyte JNICALL Java_net_sf_parapin_ParallelPort_logicLevelAtPin0
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     net_sf_parapin_ParallelPort
 * Method:    drivePin0
 * Signature: (IIB)V
 */
JNIEXPORT void JNICALL Java_net_sf_parapin_ParallelPort_drivePin0
  (JNIEnv *, jclass, jint, jint, jbyte);

/*
 * Class:     net_sf_parapin_ParallelPort
 * Method:    close0
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_net_sf_parapin_ParallelPort_close0
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
