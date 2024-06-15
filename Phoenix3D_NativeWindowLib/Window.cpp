#include "Window.h"

Window::Window(int width, int height, int x, int y, const char* title):
	width(width),
	height(height),
	x(x),
	y(y),
	title(title)
{
	hInstance = GetModuleHandle(nullptr);

	//ShowWindow(hWnd, SW_SHOWDEFAULT);


	//while (true) {
	//	if (const auto msgCode = Window::ProcessMessages())
	//		return;
	//}
}

HWND Window::Create()
{
	WNDCLASSEX wcex;
	wcex.cbSize = sizeof(wcex);
	wcex.style = CS_HREDRAW | CS_VREDRAW; // HREDRAW and VREDRAW make window redraw when resized
	wcex.cbClsExtra = 0; //how many aditional bytes should be reserved for particular processes [UNUSED]
	wcex.cbWndExtra = 0; //how many aditional bytes should be reserved for window processes [UNUSED]
	wcex.lpfnWndProc = WindowProc;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wcex.hIconSm = LoadIcon(NULL, IDI_WINLOGO);
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)GetStockObject(NULL_BRUSH);
	wcex.lpszClassName = className;
	wcex.lpszMenuName = NULL;

	RegisterClassEx(&wcex);

	hWnd = CreateWindow(
		className,
		title,
		WS_OVERLAPPED | WS_SYSMENU | WS_CAPTION | WS_MINIMIZEBOX,
		GetSystemMetrics(SM_CXSCREEN) / 2 - width / 2, //set x pos of window, getSystemMetrics(SM_CXSCREEN) gets width of screen
		GetSystemMetrics(SM_CYSCREEN) / 2 - height / 2, //sets y pos of window, getSystemMetrics(SM_CYSCREEN) gets width of screen
		width,
		height,
		(HWND)NULL,
		(HMENU)NULL,
		hInstance,
		(LPVOID*)NULL
	);

	return hWnd;
}

Window::~Window()
{
	UnregisterClass(className, hInstance);
}

std::optional<int> Window::ProcessMessages()
{
	MSG msg = {};

	while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
	{
		if (msg.message == WM_QUIT)
			return msg.wParam;

		TranslateMessage(&msg);
		DispatchMessage(&msg);

	}

	return {};
}

LRESULT __stdcall Window::WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}

	return DefWindowProc(hWnd, msg, wParam, lParam);
}