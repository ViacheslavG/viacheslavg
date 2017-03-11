#pragma once
#include <iostream>

class Checkboard
{
private:
	//create black markers
	char black;
	//create white markers
	char white;
	//quantity of rows in our checkboard
	int row;
	////quantity of columns in our checkboard
	int column;
public:
	//contructor takes 2 arguments: r - rows , c - columns
	Checkboard(int r = 0, int c = 0);
	//print checkboard
	void printCheckboard();
	~Checkboard();
};

