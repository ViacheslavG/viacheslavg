#pragma once
#include <iostream>
#include <cmath>
class Figure
{
private:
	virtual double square() = 0;
	virtual int per() = 0;
	
protected:
	//side
	int side;
public:
	Figure(int m_a);
	double getSquare() { return square(); };
	int getPer() { return per(); };
};

class Circle :public Figure
{
private:
	
	//calculating square of a circle
	virtual double square() { return 3.14 * side*side; };
	//calculating per of a circle
	virtual int per() { return 2 * 3.14 * side; };
public:
	// n - radius
	Circle(int n=0);
};

class Tria :public Figure
{
private:
	//sides of triangle
	int b;
	int c;
	int angle;
	//calculating square of triangle
	 double square();
	//calculating per of triangle
	 int per() { return side + b + c; };
public:
	Tria(int m_a, int m_b,int m_c, int m_angle);
};

class Square : public Figure
{
private:
	//sides of square a=b=c=d
	//calculating square 
	virtual double square() { return side*side; };
	//calculating per of square
	virtual int per() { return side*4; };
public:
	Square(int m_a=0);
};

class Recta :public Figure
{
private:
	//sides of rect angle
	int b;
	//square of rectangle
	 double square() { return side*b; };
	//calculating per of rectangle
	 int per() { return (side+b)*2; };
public:
	Recta(int m_a,int m_b);
};

class Rhombus : public Figure
{
private:
	
	//angle of rhombus
	int angle;
	//height of rhombus
	double h;
	//square of rhombus
	 double square() {return side*h;};
	//calculating per of rhombus
	 int per() { return 4 * side; };
public:
	Rhombus(int m_a, int m_angle=0);

};