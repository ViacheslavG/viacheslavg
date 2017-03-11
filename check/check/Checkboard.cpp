#include "stdafx.h"
#include "Checkboard.h"

//receive and set all data on their places
Checkboard::Checkboard(int r, int c)
{
	row = r;
	column = c;
	black = '#';
	white = 'o';
}
void Checkboard::printCheckboard()
{
	
	{
		for (int r = 1; r <= row; r++)
		{
			if (r % 2 == 1) // while row not even 
			{
				for (int c = 1; c <= column; c++)
				{
					if (c % 2 == 1)// and column not even 
						std::cout << black << " "; // first print 'black'
					else
						std::cout << white << " ";
				}
			}
			else // in other way (row  even and column is not even) 
			{
				for (int c = 1; c <= column; c++)
				{
					if (c % 2 == 1)
						std::cout << white << " ";// first print 'white
					else
						std::cout << black << " ";
				}
			}
				std::cout << std::endl;//skip to the next row
		}

	}
}

Checkboard::~Checkboard()
{
}
