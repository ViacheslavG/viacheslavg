// c-ow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Cow.h"

int main()
{
	{Cow test1;
	Cow one("Andy", "I like it very much", 254);
	test1 = one;
	test1.ShowCow();
	}
	std::cin.get();
    return 0;
}

