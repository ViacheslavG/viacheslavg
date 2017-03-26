// testFigure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Figure.h"
//functions that received array of pointers and calculated chosen figure
void getCircle(Figure **a, int n);
void getTria(Figure **a, int n);
void getSquare(Figure **a, int n);
void getRecta(Figure **a, int n);
void getRhombus(Figure **a, int n);
//creating visual for all file variables
int radius;
int side_a;
int side_b;
int side_c;
int heght;
int angle;

int main()
{
	Figure *a[5];
	int qLines;
	std::cout << "Please enter a Figure,that you want to calculate(1, 3 or 4): ";
	for (int i=0; i < 5; i++)
	{
		//choosing 1 , 3 or 4 lines
		std::cin >> qLines;
		if (qLines == 1)
			getCircle(a, i);
		else if (qLines == 3)
			getTria(a, i);
		//if chosen lines are 4 - choose what figure must be calculated
		else if (qLines == 4)
		{
			std::cout << "Please choose a figure that you want to calculate: "
				<< "1 - Square , 2 - Rectangle , 3 - Rhombus: ";
			char choose;
			while (std::cin >> choose && (choose != '1' && choose != '2' &&choose != '3'))
				std::cout << "Enter 1 , 2 or 3: ";
			if (choose == '1')
				getSquare(a, i);
			
			else if (choose == '2')
				getRecta(a, i);

			else
				getRhombus(a, i);
		}
		std::cout << "Please enter quantity of lines(from 1, 3 or 4): ";
		while (std::cin.get() != '\n')
			continue;
		}

	delete[] a;
	std::cin.get();
	return 0;
}

void getCircle(Figure **a, int n)
{
	std::cout << "Enter radius of circle: ";
	std::cin>> radius;
	a[n] = new Circle(radius);
	std::cout << a[n]->getSquare() << "  " << a[n]->getPer() << std::endl;
}

void getTria(Figure **a, int n)
{
	std::cout << "Enter side of triangle: ";
	std::cin >> side_a >> side_b >> side_c;
	std::cout<<"Enter an agle: ";
	std::cin >> angle;
	a[n] = new Tria(side_a, side_b, side_c, angle);
	std::cout << a[n]->getSquare() << "  " << a[n]->getPer() << std::endl;
}

void getSquare(Figure **a, int n)
{
	std::cout << "Enter side of square: ";
	std::cin >> side_a;
	a[n] = new Square(side_a);
	std::cout << a[n]->getSquare() << "  " << a[n]->getPer() << std::endl;
}

void getRecta(Figure **a, int n)
{
	std::cout << "Enter sides of rectangle: ";
	std::cin >> side_a >> side_b;
	a[n] = new Recta(side_a, side_b);
	std::cout << a[n]->getSquare() << "  " << a[n]->getPer() << std::endl;
}
void getRhombus(Figure **a, int n)
{
	std::cout << "Enter side and angle of rhombus: ";
	std::cin >> side_a >> angle;
	a[n] = new Rhombus(side_a, angle);
	std::cout << a[n]->getSquare() << "  " << a[n]->getPer() << std::endl;
}