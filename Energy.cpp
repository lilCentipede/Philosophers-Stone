#include "Energy.h"
bool Energy::reactwithFire() { return true; }
bool Energy::reactwithAir() { return true; }
bool Energy::reactwithMe(Element* el) {
	return(el->reactwithAir() && el->reactwithWater());
}
Element* Energy::copy() {
	return new Energy(*this);
}