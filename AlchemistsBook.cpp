#include "AlchemistsBook.h"
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