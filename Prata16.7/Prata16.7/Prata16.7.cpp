// Prata16.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
std::vector<int> lotto (int x, int y);

void show(int n) {  std::cout << n << " "; };

int main()
{
	std::vector <int> winner;
	winner = lotto(51, 6);
	for_each(winner.begin(), winner.end(), show);
	std::cin.get();
    return 0;
}

std::vector<int> lotto(int x, int y)
{
	std::vector<int> card(1,x);
	for(int i = 1;i!=x;i++)
		card.push_back(i);
	std::random_shuffle(card.begin(), card.end());
	card.erase(card.begin()+6,card.end());
	return std::vector<int>(card);
}

