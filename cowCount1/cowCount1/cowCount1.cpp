// cowCount1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Cow.h"

int main()
{
	
Cow test1;
Cow one("Andy", "Love it", 2390);
test1 = one;
test1.showCow();
std::cin.get();
return 0;

}

