#include "global.h"

// Starting Point
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine, int nCmdShow)
{
	GAMEWINDOW gw;
	DisplayWindow(&gw, hInstance, nCmdShow);
	MainLoop();

	return(0);
}

// Create the Window Class and the Window
void DisplayWindow(GAMEWINDOW* gw, HINSTANCE hinstance, int ncmdshow)
{
	WNDCLASSEX wc1;

	ZeroMemory(&wc1, sizeof(WNDCLASSEX));
	wc1.cbClsExtra = 0;
	wc1.cbSize = sizeof(WNDCLASSEX);
	wc1.cbWndExtra = 0;
	wc1.hbrBackground = (HBRUSH) GetStockObject(BLACK_BRUSH);
	wc1.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc1.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc1.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	wc1.hInstance = hinstance;
	wc1.lpfnWndProc = WindowProc;
	wc1.lpszClassName = "rawr";
	wc1.lpszMenuName = NULL;
	wc1.style = CS_OWNDC | CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;

	RegisterClassEx(&wc1);

	if (!(gw->hWnd = CreateWindowEx(NULL, "rawr", "Yahtzee!", WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		200, 200, gw->Width, gw->Height, NULL, NULL, hinstance, NULL)))

		return;

	if (!(gw->hWnd = CreateWindowEx(NULL, "button", " Roll", WS_CHILD | WS_VISIBLE | BS_CENTER,
		20, 20, 120, 25, gw->hWnd, NULL, hinstance, NULL)))

		ShowWindow(gw->hWnd, ncmdshow);

	return;
}

LRESULT CALLBACK WindowProc(HWND hWnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
	switch(msg)
	{
	case WM_COMMAND:
		{
		HDC hdc;
		hdc = GetWindowDC(hWnd);
		RollDie(hdc);
		ReleaseDC(hWnd, hdc);
		
		return(0);
		}

	case WM_PAINT:
		{
		PAINTSTRUCT ps;
		HWND hWnd = FindWindow("rawr", "Yahtzee!");
		HDC hdc = BeginPaint(hWnd, &ps);
		// Do stuff...
		DrawDieAt(hdc);
		EndPaint (hWnd, &ps);
		break;
		}

	case WM_DESTROY:
		{
			PostQuitMessage(0);
			return(0);
		}

	default:break;

	}

	return (DefWindowProc(hWnd, msg, wparam, lparam));
}