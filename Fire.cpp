#include "Fire.h"
bool Fire::reactwithEarth() { return true; }
bool Fire::reactwithWater() { return true; }
bool Fire::reactwithFire() { return true; }
bool Fire::reactwithMe(Element* el) {
	return el->reactwithFire();
}
Element* Fire::copy() {
	return new Fire(*this);
}