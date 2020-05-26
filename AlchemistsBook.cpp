#include "AlchemistsBook.h"
#include <iostream>
AlchemistsBook::AlchemistsBook(const Formula& f) {
	formulas.push_back(f);
}
AlchemistsBook::AlchemistsBook(const AlchemistsBook& other) {
	formulas = other.formulas;
}
AlchemistsBook& AlchemistsBook::operator=(const AlchemistsBook& other) {
	if (this != &other) {
		formulas = other.formulas;
	}
	return *this;
}
AlchemistsBook& AlchemistsBook::operator+=(const Formula& f) {
	formulas.push_back(f);
	return *this;
}
Formula& AlchemistsBook::operator[](unsigned int i) {
	return formulas[i];
}
Formula AlchemistsBook::operator[](unsigned int i) const {
	return formulas[i];
}
void AlchemistsBook::filterBadFormulas() {
	for (unsigned int i = 0; i < formulas.size();i++) {
		if (!formulas[i].correctFormula()) {
			formulas.erase(formulas.begin()+i);
			i--;
		}
		else if (formulas[i].itsDivision()) {
			formulas[i].convertDivisionToEquation();
		}
	}
}
void AlchemistsBook::printBadFormulas() {
	std::cout << "The unvalid formulas are:\n";
	for (unsigned int i = 0; i < formulas.size(); i++) {
		if (!formulas[i].correctFormula()) {
			std::cout << formulas[i]<<std::endl;
		}
	}
}
std::ostream& operator<<(std::ostream& out, const AlchemistsBook& abook) {
	for (Formula f : abook.formulas) {
		out << f<<std::endl;
	}
	return out;
}
