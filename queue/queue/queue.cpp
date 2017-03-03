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
// n  - size of an array
int n = 5;
void ShowStruct(const List *ar, int n);
//function that removes chosen element add elements that go before it to the end of a queue
void removeData(List *ar, int &n, int &k); // n - size of an array , k - removing element


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

void removeData(List *ar, int &n, int &k)
{
	//temporary for storage
	List *ptr = new List[k];
	
	//counter is created for replacment in a queue
	int counter = 0;
	//first loop saves all "k - 1" elements to temporary storage
	for (int i = 0; i < k; i++)
	{
		ptr[i].name = ar[i].name;
		ptr[i].age = ar[i].age;
		counter++;
	}
	//second loop ups all elements next after k
	for (int m = 0; counter<n; m++, counter++)
	{
		ar[m].name = ar[counter].name;
		ar[m].age = ar[counter].age;
	}
	//quantity of elements goes after k
	int c = n - k;
	//third loop adds data from temporary storage to the end of queue
	for (int i = 0; c < n; i++, c++)
	{
		ar[c].name = ptr[i].name;
		ar[c].age = ptr[i].age;
	}
	//decreases max elements of an array
	n--;
	
}

