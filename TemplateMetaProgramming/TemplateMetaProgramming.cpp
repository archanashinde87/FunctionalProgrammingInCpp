// TemplateMetaProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

template<typename T>
T cube(const T& value)
{
	return value * value * value;
}

template<int toCube>
struct Cube 
{
	enum 
	{
		value = toCube * toCube * toCube
	};
};

int main()
{
	cout << "8 Cubed = " << cube(8) << endl;
	cout << "5 Cubed = " << Cube<5>::value << endl;

	return 0;
}
