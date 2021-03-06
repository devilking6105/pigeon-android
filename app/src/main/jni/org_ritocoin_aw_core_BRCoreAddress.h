/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ritocoin_aw_core_BRCoreAddress */

#ifndef _Included_org_ritocoin_aw_core_BRCoreAddress
#define _Included_org_ritocoin_aw_core_BRCoreAddress
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ritocoin_aw_core_BRCoreAddress
 * Method:    createCoreAddress
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_ritocoin_aw_core_BRCoreAddress_createCoreAddress
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_ritocoin_aw_core_BRCoreAddress
 * Method:    createCoreAddressFromScriptPubKey
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_org_ritocoin_aw_core_BRCoreAddress_createCoreAddressFromScriptPubKey
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     org_ritocoin_aw_core_BRCoreAddress
 * Method:    createCoreAddressFromScriptSignature
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_org_ritocoin_aw_core_BRCoreAddress_createCoreAddressFromScriptSignature
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     org_ritocoin_aw_core_BRCoreAddress
 * Method:    stringify
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_ritocoin_aw_core_BRCoreAddress_stringify
  (JNIEnv *, jobject);

/*
 * Class:     org_ritocoin_aw_core_BRCoreAddress
 * Method:    isValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_ritocoin_aw_core_BRCoreAddress_isValid
  (JNIEnv *, jobject);

/*
 * Class:     org_ritocoin_aw_core_BRCoreAddress
 * Method:    getPubKeyScript
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_ritocoin_aw_core_BRCoreAddress_getPubKeyScript
  (JNIEnv *, jobject);


#ifdef __cplusplus
}
#endif
#endif
