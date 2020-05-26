#include <iostream>
#include "HFiles.h"
#include "Equation.h"
#include "Formula.h"
#include "AlchemistsBook.h"
#include "Alchemist.h"


int main() {
	Formula f1(Equation(new Air, new Air), new Spirit);
	Formula f2(Equation(new Metal, new Stone), new Gold);
	Formula f3(Equation(new Fire, new Earth), new Metal);
	Formula f4(Equation(new Fire, new Water, new Earth), new Gold);
	Formula f5(Equation(new Water, new Earth), new Stone);
	Formula f6(Equation(new Spirit, new Air), new Energy);
	Formula f7(Equation(new Water, new Air), new Energy);
	Formula f8(Equation(new Gold, new Spirit, new Energy), new PhilosophersStone);
	Formula f9(new Fire);
	Formula f10(Equation(new Energy, new Earth), new Stone);
	AlchemistsBook a;
	a += f1;
	a += f2;
	a += f3;
	a += f4;
	a += f5;
	a += f6;
	a += f7;
	a += f8;
	a += f9;
	a += f10;
	std::vector<QuantityElement> qe{ QuantityElement(10,new Air), QuantityElement(2,new Earth),QuantityElement(1,new Water),QuantityElement(4,new Fire) };

	Alchemist al(qe,a);
	if (al.creatingPhilosophersStone())
	{
		std::cout << "The Philosopher's Stone can be created!\n";
		al.getBook().printBadFormulas();
	}
	else std::cout << "Not enough for the creation of the Philosopher's Stone \n";

	return 0;

}