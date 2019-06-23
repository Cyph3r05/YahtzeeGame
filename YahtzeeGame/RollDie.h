class RollDie {
public:
	static const int Ellipse(hdc, DrawDie::leftRect1, DrawDie::topRect1, DrawDie::rightRect1, DrawDie::bottomRect1); // Center Middle
	static const int Ellipse(hdc, DrawDie::leftRect2, DrawDie::topRect2, DrawDie::rightRect2, DrawDie::bottomRect2); // Center Left
	static const int Ellipse(hdc, DrawDie::leftRect3, DrawDie::topRect3, DrawDie::rightRect3, DrawDie::bottomRect3); // Center Right
	static const int Ellipse(hdc, DrawDie::leftRect4, DrawDie::topRect4, DrawDie::rightRect4, DrawDie::bottomRect4); //Left Top Corner
	static const int Ellipse(hdc, DrawDie::leftRect5, DrawDie::topRect5, DrawDie::rightRect5, DrawDie::bottomRect5); //Left Bottom Corner
	static const int Ellipse(hdc, DrawDie::leftRect6, DrawDie::topRect6, DrawDie::rightRect6, DrawDie::bottomRect6); //Right Top Corner
};