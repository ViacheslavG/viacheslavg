#pragma once
#include <iostream>

class Port
{
private:
	char *m_brand;
	char m_style[20];
	int n_bottles;
	
public:
	Port(const char*brand="noone", const char *style = "noone", int bottles=0);
	Port(const Port &p);
	virtual ~Port() { std::cout << "DELETE\n"; delete[] m_brand; }
	Port & operator=(const Port &p);
	Port & operator+=(int bottle);
	Port &operator-=(int bottle);
	int bottleCount() const { return n_bottles; }
	virtual void show() const;
	friend std::ostream &operator<<(std::ostream &os, const Port &p);
};
class VintagePort : public Port
{
private:
	
	char *m_nickname;
	int m_year;
public:
	VintagePort();
	VintagePort(const char*brand,int bottles, char *nickname, int year);
	VintagePort(const VintagePort &vp);
	~VintagePort() { std::cout << "DELETE\n"; delete[] m_nickname; }
	VintagePort &operator=(const VintagePort &vp);
	void show()const;
	friend std::ostream & operator<<(std::ostream &os, const VintagePort &vp);

};

