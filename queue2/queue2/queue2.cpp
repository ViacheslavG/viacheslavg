#include "stdafx.h"
#include "Bank.h"

int main()
{
	Bank test(5);
	Person one = {"Slavik", 24, 1000, true};
	Person two = {"Adrew", 25, 1000, false};
	Person three = {"Vitya", 22, 1000, true};
	Person four ={"Roma", 28, 1000, false};
	Person five = { "Dima", 24, 1000,true};
	test.set_data(one);
	test.set_data(two);
	test.set_data(three);
	test.set_data(four);
	test.set_data(five);
	test.Show_b();
	std::cout << "_______________________________________" << std::endl;
	test.edit_data();
	test.Show_b();
	test.delete_p(2);
	test.Show_b();
	std::cin.get();
    return 0;
}

