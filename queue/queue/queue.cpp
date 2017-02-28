// queue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using std::string;
struct List
{
	string name;
	int age;
	int persNumber;
};
void ShowStruct( const List *ar, int n);
void removeData(List *ar, int n, int k); // n - size of array , k - removing element

 int n = 5;
int main()
{
	
	List *group = new List[n];
	group[0] = { "Slavik", 24, 1 };
	group[1] = { "Vitya", 22, 2 };
	group[2] = { "Dima", 24, 3 };
	group[3] = { "Andrew", 25, 4 };
	group[4] = { "Roma", 28, 5 };
		
	
	ShowStruct(group, n);
	std::cout << "Please choose the person, that you want to remove: ";
	int k;
	std::cin >> k;
	std::cin.get();
	removeData(group, n, k);
	n -= 1;
	ShowStruct(group, n);
	
	std::cin.get();
    return 0;
}

void ShowStruct(const List *ar, int n)
{
	int i = 0;
	for (i; i < n; i++)
	std::cout << ar[i].persNumber << " " << ar[i].name
			<< " " << ar[i].age << std::endl;

	
}

void removeData(List *ar, int n, int k)
{
	List *ptr = new List[k];
	
	int i = 0;
	int m = 0;
	for (; i < k; i++)
	{
		ptr[i].name = ar[i].name;
		ptr[i].age = ar[i].age;
		
	}
	
	for (; i<n; m++, i++)
	{
		ar[m].name = ar[i].name;
		ar[m].age = ar[i].age;
		
		
	}
	
	for (i = 0; m<n; m++,i++)
	{
		ar[m].name = ptr[i].name;
		ar[m].age = ptr[i].age;
		
	}
	
	
}

