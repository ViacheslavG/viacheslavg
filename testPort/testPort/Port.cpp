
/* Tasks:
1) Creating a method definition Port +
2) Explain why some methods are redefined, while others are not.
The Show () method for the Port class must output all its data. And VitagePort - should output data of class VintagePort (data Port + its data)
Constructors are redefined because of different signatures in classes
3) Why the functions operator = () and operator << () are not defined as virtual functions.
Operator = () - has two signatures in two classes. Virtual functions are the same signature
Operator << () can not be virtual, since it is a friendly function. And friend functions are not class methods, therefore can not be virtual.
4) Definition of methods VintagePort + */




#include "stdafx.h"
#include "Port.h"

Port::Port(const char * brand, const char *style, int bottles)
{
	//creating definition of class Port
	m_brand = new char[std::strlen(brand) + 1];
	strcpy(m_brand, brand);
	std::strncpy(m_style, style,19);
	m_style[19] = '\0';
	n_bottles = bottles;
}

Port::Port(const Port & p)
{
	//creating definition of class Port
	m_brand = new char[std::strlen(p.m_brand) + 1];
	strcpy(m_brand, p.m_brand);
	std::strncpy(m_style, p.m_style, 19);
	m_style[19] = '\0';
	n_bottles = p.n_bottles;
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	//deleting memory that m_brand could take
	delete[] m_brand;
	m_brand = new char[std::strlen(p.m_brand) + 1];
	strcpy(m_brand, p.m_brand);
	std::strncpy(m_style, p.m_style, 19);
	m_style[19] = '\0';
	n_bottles = p.n_bottles;
	return *this;
}
Port & Port::operator+=(int bottle)
{
	n_bottles += bottle;
	return *this;
}
Port & Port::operator-=(int bottle)
{
	if (n_bottles > bottle)
		n_bottles -= bottle;
	return *this;
	std::cout << "You cannot take " << bottle << " bottle(s)\n";
}
void Port::show() const
{
	std::cout << "Brand: " << m_brand << std::endl;
	std::cout << "Kind: " << m_style << std::endl;
	std::cout << "Bottles: " << n_bottles << std::endl;
}
std::ostream & operator<<(std::ostream & os, const Port & p)
{
	os << p.m_brand << ", " << p.m_style << ", " << p.n_bottles;
	return os;
}
VintagePort::VintagePort():Port("noone","vintage",0), m_nickname("noone"),m_year(0)
{
}

VintagePort::VintagePort(const char * brand,int bottles, char * nickname, int year):Port(brand,"vintage",bottles)
{
	//creating definition of class VintagePort using implicit copy Constructor of class Port
	m_nickname = new char[std::strlen(nickname)];
	strcpy(m_nickname, nickname);
	m_year = year;
}
VintagePort::VintagePort(const VintagePort & vp):Port(vp)
{
	//creating definition of class VintagePort using implicit copy Constructor of class Porp
	m_nickname = new char[std::strlen(vp.m_nickname) + 1];
	strcpy(m_nickname, vp.m_nickname);
	m_year = vp.m_year;
}
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	//defining '=' in class VintagePort
	if (this == &vp)
		return *this;
	//using explicit operator=() from class Port
	Port::operator=(vp);
	m_nickname = new char[std::strlen(vp.m_nickname)];
	strcpy(m_nickname, vp.m_nickname);
	m_year = vp.m_year;
	return *this;
}
void VintagePort::show() const
{
	//method show() from class Port is called to print information that concerns to base class
	Port::show();
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Year: " << m_year << std::endl;
}
std::ostream & operator<<(std::ostream &os, const VintagePort &vp)
{
	//the same as show()
	os << (const Port &)vp;
	os << ','<< vp.m_nickname <<','<< vp.m_year << std::endl;
	return os;
}
