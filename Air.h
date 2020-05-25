#pragma once
#include "Element.h"
class Air : virtual public Element
{
	const char* getName() { return "Air"; }
	bool reactwithAir();
	bool reactwithWater();
	bool reactwithFire();
	bool reactwithEarth();
	bool reactwithMe(Element* el);
	Element* copy();
};

