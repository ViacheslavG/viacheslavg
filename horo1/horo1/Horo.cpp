#include "stdafx.h"
#include "Horo.h"

int Horo::firstYear = 1984;
int Horo::lastYear = 2044;


Horo::Horo(int n)
{
	if (n<firstYear || n>lastYear)
		std::cout << "You cannot enter this year" << std::endl;
	else
	{
		chosenYear = n;
		colour = 0;
		animal = 0;
		//set year
		set_prediction();
	}
}
void Horo::set_prediction()
{
	if (chosenYear == firstYear)
		std::cout << east.cycle[colour] << " " << east.underCycle[animal] << std::endl;
	else 
		if (chosenYear == lastYear)
	{
		colour = 4;
		animal = 11;
		std::cout << east.cycle[colour] << " " << east.underCycle[animal] << std::endl;
	}
	else
	{	//creating a counter that will count quantity of cycles and underCycles
		int counter = chosenYear - firstYear;
		
		if (counter < 12)
		{
			//set value of counter into the animal value
			animal =counter;
			std::cout << east.cycle[colour] << " " << east.underCycle[animal] << std::endl;
			
		}

		else
			if (counter > 12)
			{
				//set full cycles and put the rest into the animal value
				while (counter > 12)
				{
					++colour;
					counter -= 12;
					animal=counter;
					
				}
				std::cout << east.cycle[colour] << " " << east.underCycle[animal] << std::endl;
			}
	}
	
}

Horo::~Horo()
{
}
