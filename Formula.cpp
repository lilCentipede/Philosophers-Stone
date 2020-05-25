#include "Formula.h"
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
std::ostream& operator<<(std::ostream& out,const Formula& f) {
	if (f.itsDivision()) {
		out << '/' << f.equation;
	}
	else if (f.itsEquation()) {
		out << f.equation << " = " << f.element->getName();
	}
	else out<< "Error";
	return out;
}
