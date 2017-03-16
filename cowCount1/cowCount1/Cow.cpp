/*12.1 Using a declaration of a class COW make a definition to it and test program*/


#include "stdafx.h"
#include "Cow.h"


Cow::Cow()//if there are no elements in to add - the programm set to 0
{
	std::cout << "An empty object has been created\n";
	*m_name = NULL;
	m_hobby = NULL;
	m_weight = 0;


}

Cow::Cow(const char * name, const char * hobby, double weight)
{
	//creating an object with 2 pointers and a double value
	std::cout << "An object has been created\n";
	int len = strlen(name);
	if (len < 20)
	{
		std::cout << "An object has been created\n";
		std::strcpy(m_name, name);
		len = strlen(hobby);
		m_hobby = new char[len + 1];
		std::strcpy(m_hobby, hobby);
		m_weight = weight;
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
	delete[] m_hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	//using operator '=' to make a deep assingment
	if (this == &c)
		return *this;
	//deleting an area of memory that m_hobby has been using before
	delete[] m_hobby;
	int len = strlen(c.m_name);
	if (len<20)
		std::strcpy(m_name, c.m_name);
	len = strlen(c.m_hobby);
	m_hobby = new char[len + 1];
	std::strcpy(m_hobby, c.m_hobby);
	m_weight = c.m_weight;
	return *this;


}

void Cow::showCow() const
{
	std::cout << "Name: " << m_name << std::endl
		      << "Hobby: " << m_hobby << std::endl
		      << "Weight: " << m_weight << std::endl;
}
