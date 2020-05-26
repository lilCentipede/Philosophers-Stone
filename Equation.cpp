#include "Equation.h"
Equation::Equation() {
	sign = '!';
}
Equation::Equation(Element* e) {
	sign = '!';
	equation.push_back(e->copy());
}
Equation::Equation(Element* one, Element* two) {
	sign = '+';
	equation.push_back(one->copy());
	equation.push_back(two->copy());
}
Equation::Equation(Element* one, Element* two, Element* three){
	sign = '+';
	equation.push_back(one->copy());
	equation.push_back(two->copy());
	equation.push_back(three->copy());
}
Equation::Equation(const Equation& one, const Equation& two) {
	sign = '+';
	for (Element* e : one.equation) {
		equation.push_back(e->copy());
	}
	for (Element* e : two.equation) {
		equation.push_back(e->copy());
	}
}
Equation::Equation(const Equation& other) {
	for (Element* el : other.equation) {
		equation.push_back(el->copy());
	}
	sign = other.sign;
}

Equation& Equation::operator=(const Equation& other) {
	if (this != &other) {
		del();
		equation.clear();
		for (Element* el : other.equation) {
			equation.push_back(el->copy());
		}
		sign = other.sign;
	}
	return *this;
}
void Equation::del() {
	for (Element* e : equation) {
		delete e;
	}
}
Equation::~Equation() {
	del();
}
Equation& Equation::operator+(Element* el) {
	sign = '+';
	equation.push_back(el->copy());
	return *this;
}
std::vector<Element*> Equation::getEquation() {
	return equation;
}
bool Equation::itsElement() const {
	return (sign == '!');
}
bool Equation::itsEquation() const{
	return (sign == '+');
}
bool Equation::validReaction()const {
	bool reaction = true;
	for (unsigned int i = 0; i < equation.size(); i++)
		for (unsigned int j = i+1; j < equation.size(); j++)
			reaction = reaction && equation[j]->reactwithMe(equation[i]);
	return reaction;
}
std::ostream& operator<<(std::ostream& out, const Equation& e) {
	if (!e.equation.empty()) {
		for (unsigned int i = 0; i < e.equation.size() - 1; i++)
			out << e.equation[i]->getName()<< " + ";
		out << e.equation.back()->getName();
	}
	return out;
	
}
