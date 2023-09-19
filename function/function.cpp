// function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>

using namespace std;

void demoFunction()
{
    cout << "Demo function Called" << endl;
}

void adder(int a, int b)
{
    cout << "Called adder, a + b = " << a+b << endl;
}

class functor
{
public:
    void operator()() const
    {
        cout << "Called Functor" << endl;
    }
 };

int main()
{
    vector<function<void()>> funcs;
    funcs.push_back(demoFunction);

    functor functor_instance;
    funcs.push_back(functor_instance);
    funcs.push_back([]() {cout << "Called anonymous lambda" << endl; });
    funcs.push_back(std::bind(adder, 10, 15));

    for (auto& f : funcs)
    {
        f();
    }
    return 0;
}
