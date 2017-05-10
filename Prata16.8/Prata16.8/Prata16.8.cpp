 // Prata16.8.cpp : Defines the entry point for the console application.
//
//Making a list of Matt`s and Kate`s guests.
//1) a list of Matt`s guests
//2)a List of Kate`s guests
//3) final list.
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <string>
using std::string;
using std::list;
void show(string n) { std::cout << n << "\n"; }
int main()
{
	//creating an empty lists
	list<string>Matt;
	list<string>Kate;
	list<string>guest;
	string name[7] = { "John","Mila","Peter","Andrew","Katie","Paul","Roman" };
	string nameK[7] = { "Mila","Anna","Dina","Peter", "Roman","Katie","Zoe" };
	//insert elements from the array to lists
	Matt.insert(Matt.begin(), name, name + 7);
	Kate.insert(Kate.begin(), nameK, nameK + 7);
	//sort elements
	Matt.sort();
	Kate.sort();
	//merge list to the final list
	guest.merge(Matt);
	guest.merge(Kate);
	//cut down similar elements
	guest.unique();
	for (auto x : guest) show(x);
	std::cin.get();
    return 0;
}

