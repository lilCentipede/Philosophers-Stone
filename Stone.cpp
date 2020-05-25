#include "Stone.h"
bool Stone::reactwithFire() { return true; }
bool Stone::reactwithMe(Element* el) {
	return (el->reactwithFire() && el->reactwithWater());

}
Element* Stone::copy() {
	return new Stone(*this);
}