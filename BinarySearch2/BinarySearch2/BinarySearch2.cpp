// BinarySearch.cpp : Defines the entry point for the console application.
//Find first or last occurence of a number

#include "stdafx.h"
#include <iostream>

int array[100] = { 1,3,20,20,20,45,78 };



int binarySearch(int x)
{
	int start = 0;
	int finish = 6;
	int result = -1;
	while (start <= finish)
	{
		int mid = (start + finish) / 2;

		if (array[mid] == x)
		{
			//find the first occurence of "20"
			result = mid;
			finish = finish -1;
			/*also the last occures of "20"
			will print '4' element
			
			result = mid;
			start = start +1;
			
			if there is no matches with the value - it returns -1;
			*/
		}

		if (array[mid] < x)
			start = mid + 1;
		else
			finish = mid - 1;
	}
	return result;
}

int main()
{

	int search = binarySearch(20);
	std::cout << search << std::endl;
	std::cin.get();
	return 0;
}

