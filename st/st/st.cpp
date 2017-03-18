// st.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"

int main()
{

Item temp = 12345689;
Stack test(5);
test.push(temp);
Item tempo = 14732096;
test.push(tempo);
test.showStack();
test = test;
Stack one;
one = test;
Stack three;
three = one;

one = one;
test.showStack();
std::cin.get();
return 0;
}

