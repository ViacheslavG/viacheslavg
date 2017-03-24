#pragma once
#include <iostream>
#include <cmath>
class Figure
{
private:
	virtual double square() = 0;
	virtual int per() = 0;
protected:
	//quantity of lines in figure
	int lines;
public:
	Figure(int quantity) { lines = quantity; };
	double getSquare() { return square(); };
	int getPer() { return per(); };
};

class Circle :public Figure
{
private:
	//radius of a circle
	int r;
	//calculating square of a circle
	virtual double square() { return 3.14 * r*r; };
	//calculating per of a circle
	virtual int per() { return 2 * 3.14 * r; };
public:
	//q - quantity of lines , n - radius
	Circle(int quantity, int n);


};

class Tria :public Figure
{
private:
	//sides of triangle
	int a;
	int b;
	int c;
	int angle;
	//calculating square of triangle
	virtual double square();
	//calculating per of triangle
	virtual int per() { return a + b + c; };
public:
	Tria(int quantity, int m_a, int m_b,int m_c, int m_angle);

};

class Square : public Figure
{
private:
	//sides of square a=b=c=d
	int a;
	//calculating square 
	virtual double square() { return a*a; };
	//calculating per of square
	virtual int per() { return a*4; };
public:
	Square(int quantity, int m_a);
};

class Recta :public Figure
{
private:
	//sides of rect angle
	int a;
	int b;
	//square of rectangle
	virtual double square() { return a*b; };
	//calculating per of rectangle
	virtual int per() { return (a+b)*2; };
public:
	Recta(int quantity, int m_a,int m_b);
};

class Rhombus : public Figure
{
private:
	//side of rhombus
	int a;
	//angle of rhombus
	int angle;
	//height of rhombus
	double h;
	//square of rhombus
	virtual double square() {return a*h;};
		//calculating per of rhombus
	virtual int per() { return 4 * a; };
public:
	Rhombus(int quantity, int m_a, int m_angle);

};