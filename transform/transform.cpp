#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
	auto render{ [](auto collection) {
		for (const auto& value : collection) 
		{ 
			cout << value << endl;
		}
	} 
	};

	vector<int> inCollection{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int> outCollection;

	transform(inCollection.begin(), inCollection.end(), back_inserter(outCollection), [](const int & value) {return value * 3; });

	cout << "Transform: " << endl;
	render(outCollection);
	return 0;
}

