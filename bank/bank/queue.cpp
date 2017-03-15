#include "stdafx.h"
#include "queue.h"
#include <cstdlib>

Queue::Queue(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node *temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items==0;
}

bool Queue::isfull() const
{
	return items==qsize;
}

int Queue::queuecount()const
{
	return items;
}

int Queue::reducecount()
{
	return items--;
}

bool Queue::enqueue(const Item & item)
{
	if (isfull())
		return false;
		Node *add = new Node; //making a new unit
		add->item = item;
		add->next = NULL;
		items++;
		if (front == NULL) //if a queue is empty - an element goes to the beginning
			front = add;
		else
			rear->next = add; // if not element goes in the end;
		rear = add; // pointer of the end shows into the new unit
		return true;
}

bool Queue::dequeue(Item & item)
{
	if(front==NULL)
	 return false;
	item = front->item; //item takes the first element
	items--;
	Node *temp = front; //saving a locaton of the first element
	front = front->next; //moving pointer to the next element
	delete temp; //deleting the privious element
	if (items == 0)
		rear = NULL;
	return true;
}
void Customer::set(long when)
{
	processtime = rand()%3+1;
	arrive = when;
}
void Customer::removeData(long when)
{
	processtime = 0;
	arrive -= when;

}


