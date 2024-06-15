#pragma once
#include <Windows.h>
#include <optional>

class Window {
public:
	Window(int width, int height, int x, int y, const char* title);
	HWND Create();
	~Window();
	static std::optional<int> ProcessMessages();
private:
	static LRESULT __stdcall WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
private:
	int width;
	int height;
	int x;
	int y;
	const char* title;
	const char* className = "Hello";
	HWND hWnd;
	HINSTANCE hInstance;
};
