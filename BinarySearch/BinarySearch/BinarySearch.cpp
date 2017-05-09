// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int array[100] = {0,5,17,29,87,96,55,2,31};



int binarySearch(int x)
{
	int start = 1;
	int finish = 8;
	while (start <= finish)
	{
		int mid = (start + finish) / 2;
		
		if (array[mid] == x)
			return mid;
		
		if (array[mid] < x)
			start = mid + 1;
		else
				finish = mid - 1;
	}
}

void sort()
{
	
	for (int start=1,finish=8; start <= finish; ++start)
	{
		for (int next = start + 1; next <= finish; ++next)
			if (array[start] > array[next])
			{
				int temp;
				temp = array[next];
				array[next] = array[start];
				array[start] = temp;

			}
		
	}
	

}

int main()
{

	sort();
	for (int start=1,finish =8; start <= finish; ++start)
		std::cout << array[start] << ' ';
	std::cout << std::endl;
	
	int search = binarySearch(96);
	std::cout << search << std::endl;
	std::cin.get();
    return 0;
}

