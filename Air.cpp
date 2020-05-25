#include "Air.h"
bool Air::reactwithAir() { return true; }
bool Air::reactwithWater() { return true; }
bool Air::reactwithFire() { return true; }
bool Air::reactwithEarth() { return true; }
bool Air::reactwithMe(Element* el) {
	return el->reactwithAir();
}
Element* Air::copy() {
	return new Air(*this);
}