// prata16.1.cpp : Defines the entry point for the console application.
//Palindrom

#include "stdafx.h"
#include <iostream>
#include <string>	
#include <iterator>
#include <algorithm>
#include <cctype>
using namespace std;


bool isPal(string &s)
{
	//creating 2 iterators: normal and reverse
	string::iterator ptr;
	string::reverse_iterator rptr;
	int i = 0;
	//deleting all symbols that are not letters
	for (ptr = s.begin(); ptr != s.end(); i++,ptr++)
	{
		//if letter - continue the loop
		if (isalpha(*ptr))
			continue;
		//if not - delete current position
		else s.erase(s.begin()+i);
	}
	//compare two iterators 
	for (ptr = s.begin(), rptr = s.rbegin(); ptr != s.end() && rptr != s.rend(); ptr++, ++rptr)
	{
		if (*ptr == *rptr)
			continue;
		else
			return false;
	}
	return true;
}

int main()
{
	string a ="madam,i`m adamg";
	//receive an answer
	cout << isPal(a) ? "Yes" : "NO";
	std::cin.get();
	return 0;
}



