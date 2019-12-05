#include <jni.h>

#ifndef _Included_org_beeware_rubicon
#define _Included_org_beeware_rubicon
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_beeware_Python
 * Method:    start
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_beeware_rubicon_Python_start
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     org_beeware_Python
 * Method:    run
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_org_beeware_rubicon_Python_run
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_beeware_Python
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_beeware_rubicon_Python_stop
  (JNIEnv *, jobject);

/*
 * Class:     org_beeware_PythonInstance
 * Method:    invoke
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_beeware_rubicon_PythonInstance_invoke
  (JNIEnv *, jobject, jobject, jobject, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
