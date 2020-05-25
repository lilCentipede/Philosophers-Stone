#pragma once
#include "Element.h"
class Water :virtual public Element
{
	const char* getName() { return "Water"; }
	bool reactwithAir();
	bool reactwithFire();
	bool reactwithMe(Element* el);
	Element* copy();
};

