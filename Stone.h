#pragma once
#include "Fire.h"
#include "Water.h"
class Stone : public Fire,public Water
{
	const char* getName() { return "Stone"; }
	bool reactwithFire();
	bool reactwithMe(Element* el);
	Element* copy();
};

