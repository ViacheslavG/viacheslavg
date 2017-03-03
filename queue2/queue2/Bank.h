#pragma once
#include <iostream>
#include <string>
using std::string;
struct Person
{
	string name;
	int age;
	int cash;
	bool honesty;
	//number in queue
	 int pers_number;

};
class Bank
{
	//lenght of a queue
	 int max;
	//queue of people
	Person *queue;
	// bank receives
	long summ_b;
	// manager earns due to unfair operations
	double summ_m;
	// to count the quantity of person in the queue
	int counter;
	//change personall number after removing an element. m - max element of an array
	void change_number(int m);

public:
	//make a queue of 3 people
	//set summ to 0
	Bank();
	//make a queue of k elements
	//set to 0 summ
	Bank(int k);
	// function takes the structure and add it to array of str. Person
	// then considers the bank cash;
	void set_data(const Person str);
	// check person for honesty. if person dishonest edit his age and adds sum of manager earns
	void edit_data();
	//Shows pers.number in queue , name and age
	void Show_b()const;
	//delete Person from the queue
	void delete_p(int del);// del - the number of person that we need to delete
	//change personall number after removing an element
void operator=(Person &s);



	~Bank();
};

