#pragma once
#include "Element.h"
class Fire : virtual public Element
{
	const char* getName() { return "Fire"; }
	bool reactwithEarth();
	bool reactwithWater();
	bool reactwithFire();
	bool reactwithMe(Element* el);
	Element* copy();
};

