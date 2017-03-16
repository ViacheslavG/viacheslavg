#pragma once
#include <iostream>

class Cow
{
private:
	char m_name[20];
	char *m_hobby;
	double m_weight;
public:
	Cow();
	Cow(const char*name, const char*hobby, double weight);
	Cow(const Cow &c);
	~Cow();
	Cow & operator=(const Cow &c);
	void showCow() const;
};