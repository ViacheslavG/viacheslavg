// check.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Checkboard.h"

int main()
{
	Checkboard test(6, 10);
	test.printCheckboard();
	std::cin.get();
    return 0;
}

