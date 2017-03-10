#pragma once
#include <iostream>
#include <string>

using std::string;
struct Prediction
{
	string cycle[5];//colour
	string underCycle[12];//animal
};
class Horo
{
private:
	//create struct for our prediction
	Prediction east = { {"Green","Red","Yellow","White","Black"},
						{"Rat","Cow","Tiger","Rabbit","Dragon","Snake","Horse","Sheep","Monkey","Chicken","Dog","Pig" }
	};
	//create first and last year and chosen year
	static int firstYear;
	static int lastYear;
	int chosenYear;
	//this value = values in struct
	int colour;
	int animal;
	//set entered year and print colour+animal
	void set_prediction();
public:
	//create and set chosen year
	Horo(int n =0);
	~Horo();
};

