#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <windowsx.h>
#include <stdlib.h>
#include <time.h>
#include "gamewindow.h"
#include "drawdie.h"

// prototypes for...
// WinMain.cpp
LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);
void DisplayWindow(GAMEWINDOW* gw, HINSTANCE hinstance, int ncmdshow);
bool HandleMessages();

// MainLoop.cpp
void MainLoop();

// RollDice.cpp
void DrawDieAt(HDC hdc);
void RollDie(HDC hdc);