// Restoring Three Numbers.cpp : 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>vec;
	int z;
	for (int i = 0; i < 4; i++) {
		cin >> z;
		vec.push_back(z);
	}

	sort(vec.begin(), vec.end());
	int a = vec[vec.size()-1] - vec[0];
	int b = vec[vec.size() - 1] - vec[1];
	int c = vec[vec.size() - 1] - vec[2];
	cout << a << " " << b << " " << c;


   
}
