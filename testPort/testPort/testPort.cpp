// testPort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Port.h"

int main()
{
	Port test("Merlot", "red", 5);
	Port one;
	test.show();
	one.show();
	std::cout << std::endl << test << std::endl;
	std::cout << one << std::endl<<std::endl;
	one = test;
	VintagePort two("SomeVine", 5, "Vinishko", 1967);
	two.show();
	std::cout << two << std::endl << std::endl;
	VintagePort three;
	three.show();
	three = two;
	two.show();
	std::cout << three<<std::endl;
	std::cin.get();
    return 0;
}

