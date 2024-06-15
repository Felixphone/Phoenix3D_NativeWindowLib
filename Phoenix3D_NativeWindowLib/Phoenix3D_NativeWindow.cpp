#include<jni.h>
#include<string>
#include "Phoenix3D_NativeWindow.h"
#include "Window.h"

JNIEXPORT jboolean JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_nativeLinkAssertion
(JNIEnv* env, jobject thisObject)
{
    return true;
}

JNIEXPORT jlong JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_createWindow
(JNIEnv* env, jobject thisObject, jint width, jint height, jint x, jint y, jstring title)
{
	int nativeWidth = (int)width;
	int nativeHeight = (int)height;
	int nativeX = (int)x;
	int nativeY = (int)y;
	const char* nativeTitle = env->GetStringUTFChars(title, 0);
	
	Window window(nativeWidth, nativeHeight, nativeX, nativeY, nativeTitle);

	HWND hWnd = window.Create();

	return reinterpret_cast<long>(hWnd);
}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_openWindow
(JNIEnv* env, jobject thisObject, jlong window)
{	
	HWND hWnd = reinterpret_cast<HWND>(window);

	ShowWindow(hWnd, SW_SHOWDEFAULT);

	while (true) {

	}

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_closeWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	DestroyWindow(hWnd);
	// <!> Possible issue <!> class is not explicitly unregistered in this method.
	// It is unregistered in the Window class destructor but cases may arise where the class
	// is never unregistered

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_transformWindow
(JNIEnv* env, jobject thisObject, jlong window, jint width, jint height, jint x, jint y, jboolean repaint)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	int nativeWidth = (int)width;
	int nativeHeight = (int)height;
	int nativeX = (int)x;
	int nativeY = (int)y;
	bool nativeRepaint = (bool)repaint;

	MoveWindow(hWnd, nativeX, nativeY, nativeWidth, nativeHeight, repaint);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_setWindowTitle
(JNIEnv* env, jobject thisObject, jlong window, jstring title)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	LPCSTR nativeTitle = env->GetStringUTFChars(title, 0);;

	SetWindowText(hWnd, nativeTitle);

}

JNIEXPORT jint JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_getWindowWidth
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	LPRECT rect = nullptr;
	GetClientRect(hWnd, rect);

	return rect->right - rect->left;

}

JNIEXPORT jint JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_getWindowHeight
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	LPRECT rect = nullptr;
	GetClientRect(hWnd, rect);

	return rect->bottom - rect->top;

}

JNIEXPORT jint JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_getWindowX
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	LPRECT rect = nullptr;
	GetClientRect(hWnd, rect);

	return rect->left;

}

JNIEXPORT jint JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_getWindowY
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	LPRECT rect =  nullptr;
	GetClientRect(hWnd, rect);

	return rect->top;

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_bringWindowToTop
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	BringWindowToTop(hWnd);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_minimiseWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	CloseWindow(hWnd);

}

JNIEXPORT jboolean JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_isWindowMinimised
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	return IsIconic(hWnd);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_maximiseWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	ShowWindow(hWnd, SW_MAXIMIZE);

}

JNIEXPORT jboolean JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_isWindowMaximised
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	return IsZoomed(hWnd);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_restoreWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	OpenIcon(hWnd);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_showWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	ShowWindow(hWnd, SW_SHOW);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_hideWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	//ShowWindow(hWnd, SW_HIDE);
	
}

JNIEXPORT jboolean JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_isWindowVisible
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	return IsWindowVisible(hWnd);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_showOwnedPopups
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	ShowOwnedPopups(hWnd, true);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_hideOwnedPopups
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	ShowOwnedPopups(hWnd, false);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_setActiveWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	SetActiveWindow(hWnd);

}

JNIEXPORT jlong JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_getActiveWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	return (long)GetActiveWindow();

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_enableWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	EnableWindow(hWnd, true);

}

JNIEXPORT void JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_disableWindow
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	EnableWindow(hWnd, false);

}

JNIEXPORT jboolean JNICALL Java_phoenix3D_nativeIntergration_nativeObjects_NativeWindow_isWindowEnabled
(JNIEnv* env, jobject thisObject, jlong window)
{
	HWND hWnd = reinterpret_cast<HWND>(window);

	return IsWindowEnabled(hWnd);

}