struct GAMEWINDOW
{
	HWND hWnd;
	int Width, Height;
	bool Windowed;

	GAMEWINDOW()
	{
		hWnd = NULL;
		Width = 800;
		Height = 600;
		Windowed = true;
	}
};