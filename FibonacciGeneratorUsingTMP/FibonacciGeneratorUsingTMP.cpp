// FibonacciGeneratorUsingTMP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

template<int n>
struct fibonacci
{
    enum
    {
        value = fibonacci<n - 1>::value + fibonacci<n - 2>::value

    };
};

template<>
struct fibonacci<0>
{
    enum
    {
        value = 0
    };

};

template<>
struct fibonacci<1>
{
    enum {
        value = 1
    };

};

int main()
{
    cout << "fibonacci(0) = " << fibonacci<0>::value << endl;
    cout << "fibonacci(1) = " << fibonacci<1>::value << endl;
    cout << "fibonacci(2) = " << fibonacci<2>::value << endl;
    cout << "fibonacci(3) = " << fibonacci<3>::value << endl;
    cout << "fibonacci(4) = " << fibonacci<4>::value << endl;
    cout << "fibonacci(11) = " << fibonacci<11>::value << endl;
    cout << "fibonacci(12) = " << fibonacci<12>::value << endl;
    cout << "fibonacci(20) = " << fibonacci<20>::value << endl;
    cout << "fibonacci(45) = " << fibonacci<45>::value << endl;

    return 0;
}
