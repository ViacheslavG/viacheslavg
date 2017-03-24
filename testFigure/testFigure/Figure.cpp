#include "stdafx.h"
#include "Figure.h"


Circle::Circle(int quantity, int n):Figure(quantity)
{
	r = n;
}



Tria::Tria(int quantity, int m_a, int m_b,int m_c, int m_angle) :Figure(quantity)
{
	a = m_a;
	b = m_b;
	c = m_c;
	angle = m_angle;

	
}
double Tria::square()
{
	//square of triagle 
	return a*b/2*(double)sin(angle*3.14 / 180);
}

Square::Square(int quantity, int m_a) :Figure(quantity)
{
	a = m_a;
}

Recta::Recta(int quantity, int m_a, int m_b):Figure(quantity)
{
	a = m_a;
	b = m_b;
}

Rhombus::Rhombus(int quantity, int m_a, int m_angle):Figure(quantity)
{
	a = m_a;
	angle = m_angle;
	h = a*sin(angle*3.14/180);
}
