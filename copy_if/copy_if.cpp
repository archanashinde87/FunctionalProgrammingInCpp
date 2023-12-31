// copy_if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	auto render{
		[](auto collection)
		{
			for (const auto & value : collection)
				{
				cout << value << endl;
				}
		}
	};

	vector<int> inCollection{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int> outCollection;
	transform(inCollection.begin(), inCollection.end(), back_inserter(outCollection),
		[](const auto& value){ return value * 3; });
	cout << "Transform: " << endl;
	render(outCollection);

	vector<int> filteredCollection;
	copy_if(outCollection.begin(), outCollection.end(), back_inserter(filteredCollection), 
		[](int &value) { return value % 2 != 0; });
	cout << "Copy_if: " << endl;
	render(filteredCollection);

	return 0;
}


