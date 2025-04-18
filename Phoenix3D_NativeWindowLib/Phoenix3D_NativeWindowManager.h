#pragma once
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager */

#ifndef _Included_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
#define _Included_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    nativeLinkAssertion
	 * Signature: ()Z
	 */
	JNIEXPORT jboolean JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_nativeLinkAssertion
	(JNIEnv*, jobject);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    createWindow
	 * Signature: (IIIILjava/lang/String;)J
	 */
	JNIEXPORT jlong JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_createWindow
	(JNIEnv*, jobject, jint, jint, jint, jint, jstring);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    open
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_open
	(JNIEnv*, jobject, jlong);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    close
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_close
	(JNIEnv*, jobject, jlong);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    setWidth
	 * Signature: (JI)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setWidth
	(JNIEnv*, jobject, jlong, jint);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    setHeight
	 * Signature: (JI)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setHeight
	(JNIEnv*, jobject, jlong, jint);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    setX
	 * Signature: (JI)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setX
	(JNIEnv*, jobject, jlong, jint);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    setY
	 * Signature: (JI)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setY
	(JNIEnv*, jobject, jlong, jint);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    setTitle
	 * Signature: (JLjava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setTitle
	(JNIEnv*, jobject, jlong, jstring);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    setVisible
	 * Signature: (JZ)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setVisible
	(JNIEnv*, jobject, jlong, jboolean);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    show
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_show
	(JNIEnv*, jobject, jlong);

	/*
	 * Class:     phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager
	 * Method:    hide
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_hide
	(JNIEnv*, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
