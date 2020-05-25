#include "Spirit.h"
bool Spirit::reactwithMe(Element* el) {
	return el->reactwithAir();
}
Element* Spirit::copy() {
	return new Spirit(*this);
}