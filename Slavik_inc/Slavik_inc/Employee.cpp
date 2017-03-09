#include "stdafx.h"
#include "Employee.h"

int Employee::places = 0;

Employee::Employee(int n)
{
	if (n == 0)
	{	//warns user that he didn`t enter any information
		std::cout << "You should enter an information about an employer!\n";
		//create a storage
	}
	else
	{
		max = n;
		employ = new  Person[max];
		std::cout << "A storage for max persons was created\n";
	}
}

void Employee::set_income(long b)
{
	//set income and calculate sum of salary fund
	income = b;
	set_fund(income);

}
double Employee::set_fund(long & b)
{
	//percent for salary fund
	double pff = 35;
	fund = b*pff / 100;
	b -= (long)fund;
	return fund;
}


void Employee::set_data(const Person & s)
{
	//set data to an array that has been created in constructor
	if (isfull())
		std::cout << "You can`t add persons due to full list\n";
	else
	{
		//set data 
		employ[places] = s;
		places++;
		
	}

}

bool Employee::isfull() const
{
	//check an array 
	return places==max;
}

void Employee::h_salary() const
{
	
	//create a pointer
	Person *high = new Person;
	//set first element of array to this pointer
	high->name = employ[0].name;
	high->salary = employ[0].salary;
	high->inn = employ[0].inn;
	//h_salary takes the bigeest value of salaries 
	for (int i = 1; i < max; i++)
	{
		if (high->salary < employ[i].salary)
		{
			high->name = employ[i].name;
			high->salary = employ[i].salary;
			high->inn = employ[i].inn;
		}

		
	}
	std::cout << "The biggest salary has " << *high << std::endl;
}

void Employee::l_salary() const
{
	//create a pointer
	Person *low = new Person;
	//set data to 1 element of array Employee.employ
	low->name = employ[0].name;
	low->salary = employ[0].salary;
	low->inn = employ[0].inn;


	//l_salary takes the lowest value of salaries 
	for (int i = 1; i < max; i++)
	{
		if (low->salary > employ[i].salary)
		{
			low->name = employ[i].name;
			low->salary = employ[i].salary;
			low->inn = employ[i].inn;
		}
	} 
	std::cout << "The lowest salary has " << *low << std::endl;
}

void Employee::print() const
{
	
	for (int i = 0; i < max; i++)
		std::cout << employ[i];
	std::cout << "Income for the latest months is " << income << std::endl;;
	std::cout << "Our salary fund is " << fund << std::endl;
	
}


Employee Employee::operator=(const Person & s)
{
	employ[places].name = s.name;
	employ[places].salary = s.salary;
	employ[places].inn = s.inn;

	return Employee();
}


std::ostream & operator<<(std::ostream & os, const Person & s)
{
	os <<s.inn<<" "<< s.name << " (" << s.salary << ")\n";
	return os;
	
}

Employee::~Employee()
{
	std::cout << "an object has been deleted\n";
	delete[] employ;
}