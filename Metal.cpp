#include "Metal.h"
bool Metal::reactwithFire() { return true; }
bool Metal::reactwithWater() { return true; }
bool Metal::reactwithMe(Element* el) {
	return (el->reactwithEarth() && el->reactwithFire());
}
Element* Metal::copy() {
	return new Metal(*this);
}