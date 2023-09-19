// accumulate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
int main()
{
	auto render{
	[](auto collection)
		{
			for (const auto& value : collection)
			{
				cout << value << endl;
			}
		} 
	};

	vector<int> inCollection{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int> outCollection;

	transform(inCollection.begin(), inCollection.end(), back_inserter(outCollection), 
		[](const auto& value) {return value * 3; });
	cout << "Transform:" << endl;
	render(outCollection);

	vector<int> filterCollection;
	copy_if(outCollection.begin(), outCollection.end(), back_inserter(filterCollection),
		[](const auto& value) { return value%2!=0; });
	cout << "copy_if:" << endl;
	render(filterCollection);

	int result = accumulate(filterCollection.begin(), filterCollection.end(), 0,
		[](int total, int value) {return total + value; });
	cout << "accumulate:" << endl;
	cout << result << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
