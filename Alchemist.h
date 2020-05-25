#pragma once
#include "AlchemistsBook.h"
struct QuantityElement {
private:
	unsigned int quantity;
	Element* object;
public:
	unsigned int getQuantity() const { return quantity; }
	void setQuantity(unsigned int q) { quantity = q; }
	Element* getObject() const { return object; }
	void setObject(Element* o) { object = o->copy(); }
};
class Alchemist
{
private:
	std::vector<QuantityElement> resources;
	AlchemistsBook book;
public:
	Alchemist(std::vector<QuantityElement> r, AlchemistsBook b);
	bool creatingPhilosophersStone();

};

