#pragma once
#include <fstream>
#include <vector>
#include "Element.h"
class Equation
{
private:
	char sign;
	std::vector<Element*> equation;
public:
	Equation();
	Equation(Element* e);
	Equation(Element* one, Element* two);
	Equation(Element* one, Element* two,Element* three);
	Equation(const Equation& one, const Equation& two);
	Equation(const Equation& other);
	Equation& operator=(const Equation& other);
	~Equation();
	std::vector<Element*> getEquation();
	bool itsElement()const;
	bool itsEquation()const;
	bool validReaction();
	Equation& operator+(Element*);
	friend std::ostream& operator<<(std::ostream& out,const Equation& e);
};

