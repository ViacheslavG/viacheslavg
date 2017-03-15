// bank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "queue.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is new client appeared?
bool isIn(int m);
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0)); //random initialization
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: "; //entering the max size of queue
	int qs;
	cin >> qs;
	cin.get();
	Queue line(qs);
	cout << "Enter the number of simulation hours: ";//entering the quantity of emulating hours
	int hours;
	cin >> hours;
	cin.get();
	//Simulation will launch one cycle per minute
	long cyclelimit = MIN_PER_HR*hours; //quntity of cycles
	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	cin.get();
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;
	Item temp;// information about new client
	long turnways = 0; //turnways while queue is full
	long customers = 0; //quantity of customer
	long served = 0; //quantity of served vustomer
	double wait_time = 0; // time when operation will be end
	double line_wait = 0; // all time waiting
	int n_people = 0;
	int sum_line = 0;
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isfull())
				turnways++;
			else
			{
				customers++;
				temp.set(cycle);
				line.enqueue(temp);

			}
		}
			
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp);
				wait_time = temp.ptime(); // = process time
				line_wait += cycle - temp.when();
				served++;
			}
			
				if(wait_time>0)
					wait_time--;
				sum_line += line.queuecount();
			
				//adding part
				if (line_wait > 1)
				{
					temp.removeData(cycle); //firstly we delete generated processtime and arrived time
					line.dequeue(temp); // then delete person from queue
					sum_line -= line.queuecount(); // and the last - decrementing quntity of person in queue
					
				}
			}
				
			if (customers > 0)
		{
				
			cout << "customers accepted: " << customers << endl;
			cout << "customers served: " << served << endl;
			cout << "turnways: " << turnways<<endl;
			cout.precision(2);
			cout.setf(ios_base::fixed, ios_base::floatfield);

			cout << "average customers that wait not more than 1 minute: " << (double)served/cyclelimit << endl; // cyclelimit 
			cout << "average queue size: " << (double)sum_line / cyclelimit << endl;
			cout << "average wait time: " << (double)line_wait /served << " minutes\n";
		}
		else
			cout << "No customers\n";
		cout << "Done!";
	
		cin.get();
		return 0;

	
}

bool newcustomer(double x)
{

	return (std::rand()*x / RAND_MAX < 1);
}

bool isIn(int m)
{
	if( m > 1)
	return false;
	
	return true;

}