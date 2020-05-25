#pragma once
#include "Metal.h"
class Gold : public Metal
{
	const char* getName() { return "Gold"; }
	bool reactwithMetal();
	bool reactwithMe(Element* el);
	Element* copy();
};

