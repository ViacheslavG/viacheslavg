#pragma once
#include <iostream>
typedef unsigned long Item;
class Stack
{
private:
	enum{MAX=10};
	Item *pitems;
	int size;
	int top;
public:
	Stack(int n=10);
	Stack(const Stack &st);
	~Stack();
	bool isEmpty()const;
	bool isFull()const;
	bool push(const Item &item);
	bool pop(Item &item);
	void showStack()const;
	Stack & operator=(const Stack& st);

};

