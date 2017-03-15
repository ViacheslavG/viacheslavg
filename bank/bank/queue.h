#pragma once

#include <iostream>
class Customer
{
private:
	long arrive; // time when a client comes
	double processtime; //time on work with client
public:
	Customer() { arrive = 0; processtime = 0; }
	void set(long when); //set elements of queue
	void removeData(long when);//remove customers data
	long when() const { return arrive; }
	double ptime() const { return processtime; }
};
typedef Customer Item;
class Queue
{
private:
	struct Node { Item item; struct Node *next; };//incline structure that visible only in this class
	enum {Q_SIZE = 10};
private:
	Node *front; //pointer to a start of a queue
	Node *rear; //pointer to an end of a queue
	int items; // quantity of elements in Queue
	const int qsize; // max elements in Queue
	Queue(const Queue &q) :qsize(0) {}
	Queue &operator=(const Queue &q) { return *this; }
public:
	Queue(int qs=Q_SIZE);//making queue with max elements
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	int reducecount();
	
	bool enqueue(const Item &item);//adding elements to the end
	bool dequeue(Item &item);//deleting elements from start

};

