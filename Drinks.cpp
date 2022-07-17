// Drinks.cpp :
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int z;
	long double sum = 0;
	vector<int>vec;
	for (int i = 0; i < x; i++) {
		cin >> z;
		vec.push_back(z);
	}

	for (int i = 0; i < vec.size(); i++) {
		sum += vec[i];
	}

	cout << sum / x;
}

