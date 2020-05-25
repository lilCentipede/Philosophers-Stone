#pragma once
#include "Element.h"
class PhilosophersStone : virtual public Element
{
	const char* getName() { return "Philosopher's stone"; }
	bool reactwithMe(Element* el);
	Element* copy();
};

