// Draws the dice on the screen and sets the sides of the die in the correct possition...
//		after being selected from RollDie.cpp
#include "global.h"
void DrawDieAt(HDC hdc) {
	Rectangle(hdc, DrawDie::leftRect, DrawDie::topRect, DrawDie::rightRect, DrawDie::bottomRect);
	Rectangle(hdc, DrawDie::leftRect+100, DrawDie::topRect, DrawDie::rightRect+100, DrawDie::bottomRect);
	Rectangle(hdc, DrawDie::leftRect+200, DrawDie::topRect, DrawDie::rightRect+200, DrawDie::bottomRect);
	Rectangle(hdc, DrawDie::leftRect+300, DrawDie::topRect, DrawDie::rightRect+300, DrawDie::bottomRect);
	Rectangle(hdc, DrawDie::leftRect+400, DrawDie::topRect, DrawDie::rightRect+400, DrawDie::bottomRect);
}