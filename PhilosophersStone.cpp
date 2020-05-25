#include "PhilosophersStone.h"
bool PhilosophersStone::reactwithMe(Element* el) {
	return true;
}
Element* PhilosophersStone::copy() {
	return new PhilosophersStone(*this);
}