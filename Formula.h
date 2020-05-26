#pragma once
#include "Equation.h"
class Formula
{
private:
	Equation equation;
	char sign;
	Element* element;
public:
	Formula();
	Formula(Element* el);
	Formula(const Equation& eq, Element* el);
	Formula(const Formula& other);
	Formula& operator=(const Formula& other);
	~Formula();
	Element* getElement() const { return element; }
	Equation getEquation()const { return equation; }
	bool itsDivision()const;
	bool itsEquation()const;
	void convertDivisionToEquation();
	bool correctFormula()const;
	friend std::ostream& operator<<(std::ostream& out, const Formula& f);

};

