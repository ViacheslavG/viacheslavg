#include "stdafx.h"
#include "Figure.h"


Figure::Figure(int a)
{
	side = a;
}

Circle::Circle(int m_a):Figure(m_a)
{
	
}



Tria::Tria(int m_a,int m_b,int m_c, int m_angle) :Figure(m_a)
{
	b = m_b;
	c = m_c;
	angle = m_angle;

	
}
double Tria::square()
{
	//square of triagle 
	return (side*b/2*(double)sin(angle*3.14 / 180));
}

Square::Square(int m_a) :Figure(m_a)
{
}


Recta::Recta(int m_a, int m_b):Figure(m_a)
{
	b = m_b;
}

Rhombus::Rhombus(int m_a, int m_angle):Figure(m_a)
{
	angle = m_angle;
	h = side*sin(angle*3.14/180);
}


