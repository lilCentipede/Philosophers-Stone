#pragma once
#include "Air.h"
class Spirit : public Air
{
	const char* getName() { return "Spirit"; }
	bool reactwithMe(Element* el);
	Element* copy();
};

