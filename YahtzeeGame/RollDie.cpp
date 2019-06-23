// Rolls the die
#include "global.h"

void RollDie(HDC hdc) {

	HBRUSH WhiteBrush = NULL;
	HBRUSH BlackBrush = NULL;
	HPEN WhitePen = NULL;

	WhiteBrush = CreateSolidBrush(RGB(0, 255, 255));
	BlackBrush = CreateSolidBrush(RGB(0, 255, 0));

	int sideNumber = rand()  % 6 + 1;
	switch (sideNumber) {
		//Die 1
	case 1:
		{
			// Side 1
			SelectObject(hdc, BlackBrush);
			Ellipse(hdc, DrawDie::leftRect1, DrawDie::topRect1, DrawDie::rightRect1, DrawDie::bottomRect1); // Center Middle
		} break;

	case 2:
		{
			// Side 2
			SelectObject(hdc, BlackBrush);
			Ellipse(hdc, DrawDie::leftRect5, DrawDie::topRect5, DrawDie::rightRect5, DrawDie::bottomRect5); //Left Bottom Corner
			Ellipse(hdc, DrawDie::leftRect6, DrawDie::topRect6, DrawDie::rightRect6, DrawDie::bottomRect6); //Right Top Corner
		} break;

	//case 3:
	//	{
	//		// Side 3
	//		SelectObject(hdc, BlackBrush);
	//		Ellipse(hdc, DrawDie::leftRect1, DrawDie::topRect1, DrawDie::rightRect1, DrawDie::bottomRect1); // Center Middle
	//		Ellipse(hdc, DrawDie::leftRect5, DrawDie::topRect5, DrawDie::rightRect5, DrawDie::bottomRect5); //Left Bottom Corner
	//		Ellipse(hdc, DrawDie::leftRect6, DrawDie::topRect6, DrawDie::rightRect6, DrawDie::bottomRect6); //Right Top Corner
	//	} break;

	//case 4:
	//	{
	//		// Side 4
	//		SelectObject(hdc, BlackBrush);
	//		Ellipse(hdc, DrawDie::leftRect4, DrawDie::topRect4, DrawDie::rightRect4, DrawDie::bottomRect4); //Left Top Corner
	//		Ellipse(hdc, DrawDie::leftRect5, DrawDie::topRect5, DrawDie::rightRect5, DrawDie::bottomRect5); //Left Bottom Corner
	//		Ellipse(hdc, DrawDie::leftRect6, DrawDie::topRect6, DrawDie::rightRect6, DrawDie::bottomRect6); //Right Top Corner
	//		Ellipse(hdc, DrawDie::leftRect7, DrawDie::topRect7, DrawDie::rightRect7, DrawDie::bottomRect7); //Right Bottom Corner
	//	} break;

	//case 5:
	//	{
	//		// Side 5
	//		SelectObject(hdc, BlackBrush);
	//		Ellipse(hdc, DrawDie::leftRect1, DrawDie::topRect1, DrawDie::rightRect1, DrawDie::bottomRect1); // Center Middle
	//		Ellipse(hdc, DrawDie::leftRect4, DrawDie::topRect4, DrawDie::rightRect4, DrawDie::bottomRect4); //Left Top Corner
	//		Ellipse(hdc, DrawDie::leftRect5, DrawDie::topRect5, DrawDie::rightRect5, DrawDie::bottomRect5); //Left Bottom Corner
	//		Ellipse(hdc, DrawDie::leftRect6, DrawDie::topRect6, DrawDie::rightRect6, DrawDie::bottomRect6); //Right Top Corner
	//		Ellipse(hdc, DrawDie::leftRect7, DrawDie::topRect7, DrawDie::rightRect7, DrawDie::bottomRect7); //Right Bottom Corner
	//	} break;

	//case 6:
	//	{
	//		// Side 6
	//		SelectObject(hdc, BlackBrush);
	//		Ellipse(hdc, DrawDie::leftRect2, DrawDie::topRect2, DrawDie::rightRect2, DrawDie::bottomRect2); // Center Left
	//		Ellipse(hdc, DrawDie::leftRect3, DrawDie::topRect3, DrawDie::rightRect3, DrawDie::bottomRect3); // Center Right
	//		Ellipse(hdc, DrawDie::leftRect4, DrawDie::topRect4, DrawDie::rightRect4, DrawDie::bottomRect4); //Left Top Corner
	//		Ellipse(hdc, DrawDie::leftRect5, DrawDie::topRect5, DrawDie::rightRect5, DrawDie::bottomRect5); //Left Bottom Corner
	//		Ellipse(hdc, DrawDie::leftRect6, DrawDie::topRect6, DrawDie::rightRect6, DrawDie::bottomRect6); //Right Top Corner
	//		Ellipse(hdc, DrawDie::leftRect7, DrawDie::topRect7, DrawDie::rightRect7, DrawDie::bottomRect7); //Right Bottom Corner
	//	} break;

	}

	DeleteObject(WhitePen);
	DeleteObject(WhiteBrush);
	DeleteObject(BlackBrush);

}