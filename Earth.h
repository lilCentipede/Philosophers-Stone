#pragma once
#include "Element.h"
class Earth : virtual public Element
{
public:
	const char* getName() { return "Earth"; }
	bool reactwithFire();
	bool reactwithAir();
	bool reactwithWater();
	bool reactwithMe(Element* el);
	Element* copy();
};

