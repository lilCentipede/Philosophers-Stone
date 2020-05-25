#include "Earth.h"
bool Earth::reactwithFire() { return true; }
bool Earth::reactwithAir() { return true; }
bool Earth::reactwithWater() { return true; }
bool Earth::reactwithMe(Element* el) {
	return el->reactwithEarth();
}
Element* Earth::copy() {
	return new Earth(*this);
}