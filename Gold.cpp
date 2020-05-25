#include "Gold.h"
bool Gold::reactwithMetal() { return true; }
bool Gold::reactwithMe(Element* el) {
	return el->reactwithMe(new Metal);
}
Element* Gold::copy() {
	return new Gold(*this);
}