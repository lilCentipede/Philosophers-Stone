#pragma once
#include "AlchemistsBook.h"
#include "HFiles.h"
struct QuantityElement {
private:
	unsigned int quantity;
	Element* object;
public:
	QuantityElement(unsigned int q,Element* o){
		quantity = q;
		object = o->copy();
	}
	unsigned int getQuantity() const { return quantity; }
	void setQuantity(unsigned int q) { quantity = q; }
	Element* getObject() const { return object; }
	void setObject(Element* o) { object = o->copy(); }
	void minusOne() { quantity--; }
};
class Alchemist
{
private:
	std::vector<QuantityElement> resources;
	AlchemistsBook book;
public:
	Alchemist(std::vector<QuantityElement> r, AlchemistsBook b);
	AlchemistsBook getBook() const { return book; }
	bool creatingPhilosophersStone();
	bool searchElementInResources(Element* el);
	int searchElementInBook(Element* el);
	bool searchElement(Element*);


};

