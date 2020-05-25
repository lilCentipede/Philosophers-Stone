#include <iostream>
#include "HFiles.h"
#include "Equation.h"
#include "Formula.h"
#include "AlchemistsBook.h"


int main() {
	Equation eq(new Stone(),new Metal());
	if (eq.validReaction()) {
		std::cout << "Yes\n";
	}
	else std::cout << "No\n";
	std::cout << eq << std::endl;
	Formula f(eq, new Gold);
	std::cout << f<<'\n';
	AlchemistsBook a;
	a += f;
	std::cout << a[0];
	return 0;
}