#pragma once
#include <iostream>
#include <string>


struct Person {
	//name of employer
	std::string name;
	//his salary
	double salary;
	//his identification number in company
	int inn;
};

class Employee
{
private:
	//array of employees
	Person *employ ;
	//max Employee
	int max;
	//month`s income in $
	long income;
	// salary fund that = 35% from income
	double fund;
	//how many places are left
	static int places;
	//set salary fund that = 35% from income;
	double set_fund(long &b);
public:
	
	
	//create storage for employees`s list.
	Employee(int n=0);
	//function that set income of 1 month
	void set_income(long b);
	void set_data(const Person &s);
	//checking for fullest array
	bool isfull() const;
	//checking for the highest salary
	void h_salary()const;
	//checking for the lowest salary
	void l_salary()const;
	//printing the information of employees
	void print()const;
	friend std::ostream & operator<<(std::ostream & os, const Person &s);
	Employee operator=(const Person &s);
	~Employee();
};

