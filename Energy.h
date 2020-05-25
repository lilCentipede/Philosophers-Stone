#pragma once
#include "Water.h"
#include "Air.h"
class Energy :public Water,public Air
{
	const char* getName() { return "Energy"; }
	bool reactwithFire();
	bool reactwithAir();
	bool reactwithMe(Element* el);
	Element* copy();
};

