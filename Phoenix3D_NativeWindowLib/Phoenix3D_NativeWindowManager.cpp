#include<jni.h>
#include "Phoenix3D_NativeWindowManager.h"
#include "Window.h"

JNIEXPORT jboolean JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_nativeLinkAssertion
(JNIEnv* env, jobject thisObject)
{
	return true;
}

JNIEXPORT jlong JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_createWindow
(JNIEnv* env, jobject thisObject, jint width, jint height, jint x, jint y, jstring title)
{
	int nativeWidth = (int)width;
	int nativeHeight = (int)height;
	int nativeX = (int)x;
	int nativeY = (int)y;
	const char* nativeTitle = env->GetStringUTFChars(title, 0);

	Window window(nativeWidth, nativeHeight, nativeX, nativeY, nativeTitle);

	HWND hWnd = window.Create();

	return (long)hWnd;
}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_open
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = (HWND)window;
	ShowWindow(hWnd, SW_SHOWDEFAULT);
}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_close
(JNIEnv* env, jobject thisObject, jlong window)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setWidth
(JNIEnv* env, jobject thisObject, jlong window, jint width)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setHeight
(JNIEnv* env, jobject thisObject, jlong window, jint height)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setX
(JNIEnv* env, jobject thisObject, jint x)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setY
(JNIEnv* env, jobject thisObject, jlong y)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setTitle
(JNIEnv* env, jobject thisObject, jstring title)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_setVisible
(JNIEnv* env, jobject thisObject, jboolean show)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_show
(JNIEnv* env, jobject thisObject, jlong window)
{

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindowManager_hide
(JNIEnv* env, jobject thisObject, jlong window)
{

}