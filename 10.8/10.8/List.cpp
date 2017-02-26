#include "stdafx.h"
#include "List.h"


List::List()
{
	counter = 0;
}

List::List(Item *ptr, int n)
{

	counter = n;
	for (int i = 0; i < MAX; i++)
		lists[i] = *ptr++;
	std::cout << "You have created an empty array with " << counter << " elements"
		<< ". The Max element in list is " << MAX << std::endl;

}

bool List::isFull() const
{
	return counter == MAX;
}

bool List::isEmpty() const
{
	return counter == 0;
}
void List::addElement(Item n)
{
	while (isFull())
	{
		std::cout << "You cannot add an element due to full list" << std::endl;
		break;
	}
	if (counter < MAX)
	{
		lists[counter++] = n;
		std::cout << "You have succesfully added the element to list" << std::endl;
		std::cout << "There are " << MAX - counter << " free elements" << std::endl;
	}
}

void List::editElement(int elementToEdit, Item newValue)
{
	while (isEmpty())
	{
		std::cout << "You cannot edit an element due to empty list" << std::endl;
		break;
	}
	if (counter > 0 && elementToEdit < MAX)
	{
		lists[elementToEdit] = newValue;
		std::cout << "You have succesfully edit the element of the list" << std::endl;
	}


}
List::~List()
{
}
