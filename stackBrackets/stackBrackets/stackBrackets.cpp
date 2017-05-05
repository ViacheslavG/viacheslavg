// stackBrackets.cpp : Defines the entry point for the console application.
//simulating proccess of the program

#include "stdafx.h"
#include <iostream>
int Stack[100], ind;
void push(int x)
{
	++ind;
	Stack[ind] = x;
	std::cout << "The element has been sucessfully pushed into the Stack" << std::endl;
}


int top()
{
	return Stack[ind];
}
bool isEmpty()
{
	
	return ind==0;
}
void pop(int x)
{
	if (Stack[ind] == x && !isEmpty())
	{
		ind--;
		std::cout << "The element has been succesfully poped from the Stack" << std::endl;
	}
	else
	{
		std::cout << "You couldn`t pop that element\n";
	}
}
int main()
{
	int a = 1; // {} brackets
	int b = 2; // () brackets
	int c = 3; // [] brackets
	push(a);
	push(b);
	pop(b);
	int t = top();
	std::cout << "TOP: " << t << std::endl;
	push(c);
	pop(a);
	std::cout << top();
	std::cin.get();
    return 0;
}

