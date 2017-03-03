#include "stdafx.h"
#include "Bank.h"


Bank::Bank()
{
	max = 3;
	queue=new Person[max];
	summ_b = 0;
	summ_m = 0;
}

Bank::Bank(int k)
{
	max = k;
	//the max size of array
	queue = new Person[max];
	//set all private data to 0
	counter = 0;
	summ_b = 0;
	summ_m = 0;
}
void Bank::set_data(const Person str)
{
		//set all incoming data to the array and create a pers.number for them
		queue[counter] = str;
		//count todays revenue
		summ_b += str.cash;
		//set personal number;
		queue[counter].pers_number = counter+1;
		counter++;

	
}
void Bank::edit_data()
{
	//check for honesty
	for (int i = 0; i < max; i++)
	{
		//if its true - continue checking people
		if (queue[i].honesty)
			continue;
		else
			//when its false - edit age and make money
			if (!queue[i].honesty)
			{
				queue[i].age = 18;
				//count manager`s cash after changing the age
				summ_m += (queue[i].cash*0.2);
				//removes manager`s cash from bank cash
			}
	 }
	summ_b -= summ_m;
}

void Bank::Show_b() const
{
	for (int i = 0; i < max; i++)
		std::cout << queue[i].pers_number << ' ' << queue[i].name
		<<' '<<queue[i].age << "\n";
	std::cout << "From this people bank has received = " << summ_b << "$ cash\n"
		<< ", and manager has earned = " << summ_m << "$ cash\n";
}
void Bank::delete_p(int del)
{
	//decrease bank revenue while deleting an element
	if (queue[del - 1].honesty)
	summ_b -= queue[del - 1].cash;

	//if deleting person is unfair, program decrease manager`s cash for 20% and bank - for 80%
	if (!queue[del - 1].honesty)
	{
		summ_b -= (queue[del - 1].cash*0.8);
		summ_m -= (queue[del - 1].cash*0.2);
	}
	//create temporary array
	Person *ptr = new Person[del];
	counter = 0;
	//copy all del - 1 elements to another storage
	for (int i = 0; i < del; i++)
	{
		ptr[i] = queue[i];
		counter++;
	}
	//up elements to begining of the queue 
	for (int m = 0; counter < max; m++, counter++)
			queue[m] = queue[counter];
	//paste all copied elements to the end of a queue
		for (counter = max - del; counter < max; counter++)
			queue[counter] = *ptr++;
		
		//decrease the number of people in queue
		max--;
		change_number(max);
		
}
void Bank::change_number(int m)
{
	//change personal number from the start to the end of a queue
	for (int i = 0; i < m; i++)
		queue[i].pers_number = i + 1;
}
void Bank::operator=(Person &s)
{
	//overload '=' to make code more understandable
	//assingment in functions become more easier
	queue[counter].name = s.name;
	queue[counter].age = s.age;
	queue[counter].cash = s.cash;
	queue[counter].honesty = s.honesty;
	
	// don`t work with this realization(if we change pers.num here)
	//queue[counter].pers_number = counter + 1;
}
Bank::~Bank()
{
	
}
