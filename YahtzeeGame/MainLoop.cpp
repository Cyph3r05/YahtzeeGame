#include "global.h"


// The Main Loop
void MainLoop()
{
MSG msg;
	// Main Game Loop
		// Check for Messages and Handle
	while(TRUE)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
			{
			if (msg.message == WM_QUIT)
				break;

			TranslateMessage(&msg);
			DispatchMessage(&msg);

			//call your game main function
			}
	}
}