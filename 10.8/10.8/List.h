#pragma once
#include <iostream>
typedef unsigned int Item;

class List
{
private:
	static const int MAX = 10;
	Item lists[MAX];

	int counter;

public:
	List();
	List(Item *ptr, int n);
	bool isFull() const;
	bool isEmpty() const;
	void addElement(Item n);
	void editElement(int elementToEdit, Item newValue);
	~List();
};

