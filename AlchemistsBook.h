#pragma once
#include "Formula.h"
class AlchemistsBook
{
private:
	std::vector<Formula> formulas;
public:
	AlchemistsBook(const Formula&);
	AlchemistsBook() {}
	AlchemistsBook(const AlchemistsBook&);
	~AlchemistsBook() {}
	AlchemistsBook& operator=(const AlchemistsBook& );
	AlchemistsBook& operator+=(const Formula& f);
	Formula& operator[](unsigned int i);
	Formula operator[](unsigned int i) const;
};

