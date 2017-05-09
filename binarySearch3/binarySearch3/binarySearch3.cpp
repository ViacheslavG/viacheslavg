// binarySearch3.cpp : Defines the entry point for the console application.
//You are given a sorted array of numbers, and followed by number of queries, for each query if the queried number is present in the array print its position, else print -1.

/*Input

First line contains N Q, number of elements in the array and number of queries to follow,

Second line contains N numbers, elements of the array, each number will be - 10 ^ 9 <= ai <= 10 ^ 9, 0 < N <= 10 ^ 5, 0 < Q <= 5 * 10 ^ 5

	Output

	For each element in the query, print the elements 0 based location of its first occurence, if present, otherwise print - 1.*/

#include "stdafx.h"
#include <iostream>

int binarySearch(int *ar, int N, int val)
{
	int left = 0;
	int right = N - 1;
	//if there are no matches - the function returns -1
	int result = -1;
		while (left <= right)
		{
			//finding mid element
			int mid = (left + right) / 2;
			if (val == ar[mid])
			{
				//if there is one match - find have this value been appeared already 
				result = mid;
				right = right - 1;
			}
			else
			{
				//if val is smaller then mid - reduce right to "mid - 1"
				// if val is bigger - increase left to "mid +1" 
				//then go to the next cycle of the loop
				if (val < ar[mid])
					right = mid - 1;
				else left = mid + 1;
			}
		}
		return result;

}
int main()

{
	const int k = 5; // number of elements of an array
	int n = 4; // number of queries
	int arr[k] = {2,4,7,7,9};
	//result value
	int r;
	int value;
	std::cout << "Please enter the value to check: ";
	std::cin >> value;
	while (n>0)
	{
		r = binarySearch(arr, k, value);
		std::cout << r << std::endl;
		std::cout << "Please enter the value to check: ";
		std::cin >> value;
		n--;
	}
	std::cin.get();
    return 0;
}

