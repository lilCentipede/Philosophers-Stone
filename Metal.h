#pragma once
#include "Earth.h"
#include "Fire.h"
class Metal : public Earth, public Fire
{
	const char* getName() { return "Metal"; }
	bool reactwithFire();
	bool reactwithWater();
	bool reactwithMe(Element* el);
	Element* copy();
};

