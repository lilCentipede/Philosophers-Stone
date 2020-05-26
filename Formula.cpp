#include "Formula.h"
#include "HFiles.h"
Formula::Formula() {
	sign = '!';
	element = nullptr;
}
Formula::Formula(Element* el) {
		sign = '/';
		element = el->copy();
}
Formula::Formula(const Equation& eq, Element* el) {
	equation = eq;
	element = el->copy();
	sign = '=';
}
Formula::Formula(const Formula& other) {
	equation = other.equation;
	sign = other.sign;
	element = other.element->copy();
}
Formula& Formula::operator=(const Formula& other) {
	if (this != &other) {
		equation = other.equation;
		sign = other.sign;
		element = other.element->copy();
	}
	return *this;
}
Formula::~Formula() {
	if (element != nullptr) 
		{ delete element; }
}
bool Formula::itsDivision()const {
	return (sign == '/');
}
bool Formula::itsEquation() const{
	return (sign == '=');
}
bool Formula::correctFormula()const{
	return equation.validReaction();
}
void Formula::convertDivisionToEquation() {
	if (element->getName() == "Fire" ||
		element->getName() == "Water" ||
		element->getName() == "Earth" ||
		element->getName() == "Air" ||
		element->getName() == "PhilosophersStone") {
		equation + element->copy();
		equation + element->copy();
	}
	if (element->getName() == "Metal") {
		equation + (new Earth);
		equation + (new Fire);
	}
	if (element->getName() == "Stone") {
		equation + (new Fire);
		equation + (new Water);
	}
	if (element->getName() == "Energy") {
		equation + (new Water);
		equation + (new Air);
	}
	if (element->getName() == "Spirit") {
		equation + (new Air);
		equation + (new Air);
	}
	if (element->getName() == "Gold") {
		equation + (new Metal);
		equation + (new Metal);
	}
}
std::ostream& operator<<(std::ostream& out,const Formula& f) {
	if (f.itsDivision()) {
		out << '/' << f.element->getName();
	}
	else if (f.itsEquation()) {
		out << f.equation << " = " << f.element->getName();
	}
	else out<< "Error";
	return out;
}
