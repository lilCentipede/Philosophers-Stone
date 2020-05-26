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
	unsigned int getSize() const{ return formulas.size(); }
	AlchemistsBook& operator=(const AlchemistsBook& );
	AlchemistsBook& operator+=(const Formula& f);
	void printBadFormulas();
	void filterBadFormulas();
	Formula& operator[](unsigned int i);
	Formula operator[](unsigned int i) const;
	friend std::ostream& operator<<(std::ostream& out, const AlchemistsBook&);
};

