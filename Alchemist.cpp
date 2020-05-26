#include "Alchemist.h"
Alchemist::Alchemist(std::vector<QuantityElement> r, AlchemistsBook b) {
	book = b;
	resources = r;
}
int Alchemist::searchElementInBook(Element* el) {
	for(unsigned int i=0;i<book.getSize();i++){
		if (el->getName() == book[i].getElement()->getName())
			return i;
	}
	return -1;
}
bool Alchemist::searchElementInResources(Element* el) {
	for (unsigned int i = 0; i < resources.size(); i++) {
		if (el->getName() == resources[i].getObject()->getName()
			   && resources[i].getQuantity() > 0) {
			resources[i].minusOne();
			return true;
		}
	}
	return false;
}

bool Alchemist::searchElement(Element* el) {
	int result = searchElementInResources(el);
	if (!result) {
		int line = searchElementInBook(el);
		if (line == -1) {
			return false;
		}
		else {
			Equation eq = book[line].getEquation();
			bool eqresult = true;
			for (Element* el : eq.getEquation()) {
				eqresult = eqresult && searchElement(el);
			}
			return eqresult;
		}
	}
	return true;
}
bool Alchemist::creatingPhilosophersStone() {
	AlchemistsBook b = book;
	book.filterBadFormulas();
	bool result = searchElement(new PhilosophersStone());
	book = b;
	return result;

}