#include "Water.h"
bool Water::reactwithAir() { return true; }
bool Water::reactwithFire() { return true; }
bool Water::reactwithMe(Element* el) {
	return el->reactwithWater();
}
Element* Water::copy() {
	return new Water(*this);
}