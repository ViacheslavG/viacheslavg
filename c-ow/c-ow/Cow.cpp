/*12.1 Using a declaration of a class COW make a definition to it and test program*/


#include "stdafx.h"
#include "Cow.h"


Cow::Cow()//if there are no elements in to add - the programm set to 0
{
	std::cout << "An empty object has been created\n";
	*name=NULL;
	hobby = NULL;
	weight = 0;


}

Cow::Cow(const char * nm, const char * ho, double wei)
{
	//creating an object with 2 pointers and a double value
	std::cout << "An object has been created\n";
	int len = strlen(nm);
	if (len < 20)
	{
		std::cout << "An object has been created";
		std::strcpy(name, nm);
		len = strlen(ho);
		hobby = new char[len + 1];
		std::strcpy(hobby, ho);
		weight = wei;
	}
	else
		std::cout << "You cannot enter this name";
}

Cow::Cow(const Cow & c)
{
	*this = c;

}


Cow::~Cow()
{
	std::cout << "An object has been deleted\n";
	delete[] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	//using operator '=' to make a deep assingment
	if (this == &c)
		return *this;
	delete[] hobby;
	int len = strlen(c.name);
	if(len<20)
	std::strcpy(name, c.name);
	len = strlen(c.hobby);
	hobby = new char[len +1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;

	
}

void Cow::ShowCow() const
{
	std::cout << "Name: " << name << std::endl
		<< "Hobby: " << hobby << std::endl
		<< "Weight: " << weight << std::endl;
}
