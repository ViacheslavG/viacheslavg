//Prata 12.4
//Making definition to a Stack class using dynamic memory

#include "stdafx.h"
#include "Stack.h"
//creating a stack with n elements
Stack::Stack(int n)
{
	std::cout << "An object has been created" << std::endl;
	size = n;
	pitems = new Item[size];
	top = 0;
}

Stack::Stack(const Stack & st)
{
	*this = st;
	/*size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];*/

}

Stack::~Stack()
{
	std::cout << "An object has been deleted\n";
	delete[] pitems;
}

bool Stack::isEmpty() const
{
	return top==0;
}

bool Stack::isFull() const
{
	return top==size;
}
//checking the remaining space and then adds the new element
bool Stack::push(const Item & item)
{
	if (!isFull())
	{
		pitems[top] = item;
		top++;
		return true;
	}
	else return false;
}
//checking if there any elements in stack and then revomes last element
bool Stack::pop(Item & item)
{
	if (!isEmpty())
	{
		item = pitems[top];
		size--;
		top--;
	
		return true;
	}
	return false;
}

void Stack::showStack() const
{
	for (int i = 0; i < top; i++)
		std::cout << pitems[i] << std::endl;
}

//checking on assingment two similar objects, then deletes all items in stack and creates new array
Stack & Stack::operator=(const Stack & st)
{
	if (this == &st)
		return *this;
	delete[] pitems; //deleting was done because of having new adress of variable due to connection with another variables
	size = st.size;
	pitems = new Item[size];
	top = st.top;
	for (int i = 0; i < size; i++)
		pitems[i] = st.pitems[i];
	return *this;
	
}
