// Slavik_inc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Employee.h"




int main()
{
	{
		Person one = { "Jamie", 1600,1 };
		Person two = { "Lisa", 1480, 2 };
		Person three = { "Honny", 2500, 3 };
		Person four = { "JAck", 6600, 4 };
		Person five = { "Daniel", 4489, 5 };
		Person six = { "Dolce", 2200, 6 };
		Person seven = { "Jim", 1325, 7 };
		Person eight = { "Lee", 2500, 8 };
		Person nine = { "Sasha", 950, 9 };
		Person ten = { "Ninet", 3300, 10 };
		Employee test(10);
		test.set_data(one);
		test.set_data(two);
		test.set_data(three);
		test.set_data(four);
		test.set_data(five);
		test.set_data(six);
		test.set_data(seven);
		test.set_data(eight);
		test.set_data(nine);
		test.set_data(ten);
		test.set_income(700000);
		test.h_salary();
		test.l_salary();
		test.print();
	}
	std::cout << "end of main";
	std::cin.get();
    return 0;
}

