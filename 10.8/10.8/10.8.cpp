// 10.8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "List.h"

int main()
{

	Item box[] = { 1,2,3,4,5 };

	List test(box, sizeof box / sizeof Item);

	std::cin.get();
	return 0;
}

