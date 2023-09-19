// bind.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>

//using namespace std;

auto greater_than(int first, int second)
{
	return first >= second;
}
int main()
{
	std::vector<int> ages{ 9, 20, 13, 4, 5, 6, 10, 28, 19, 15, 60, 23, 47, 12, 19, 99 };
	int over21 = 0 ;
	for (int age : ages)
	{
		if (age >= 21)
		{
			over21++;
		}
	}
	std::cout << "Number over 21 = " << over21 << std::endl;

	auto num_over21 = std::count_if(ages.begin(), ages.end(), 
		std::bind(&greater_than,std::placeholders::_1, 21));
	std::cout << "Number over 21 = " << num_over21 << std::endl;

	return 0;
}
