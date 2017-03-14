// st.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"

int main()
{

Item temp = 123456899;
Stack test(5);
test.push(temp);
temp = 147320986;
test.push(temp);
test.pop(temp);
test = test;
Stack one;
one = test;
Stack three;
three = one;
one.pop(temp);
one = one;
	std::cin.get();
    return 0;
}

