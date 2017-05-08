// taskFromTheCourse.cpp : Defines the entry point for the console application.
//It`s given an array(indexed from 1) of N elements
//on witch we make M queries:
//add(Left, Right, X) - all elements of between the position Left and Right
// (1<=Left<=Right<=N) are raising their values with X.
// given array - 1 1 1 4 5 6
//operations (1,5,2),(2,3,10)
//Final array - 3 13 13 6 7 6

#include "stdafx.h"
#include<iostream>

int array[7] = {0,1,1,1,4,5,6 };
void add(int left, int right, int x)
{
	for (left;left <= right;left++)
		array[left] += x;
	

}
int main()
{
	add(1, 5, 2);
	add(2, 3, 10);
	for (int i = 1; i < 7; i++)
		std::cout << array[i] << " ";
	std::cin.get();
    return 0;
}

