// Vanya and Fence.cpp 
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n, h,counter=0;
	cin >> n >> h;
	int z;
	vector<int>vec;
	for (int i = 0; i < n; i++) {
		cin >> z;
		vec.push_back(z);
	}
	for (int i = 0; i < n; i++) {
		if (vec[i] > h) {
			counter += 2;
		}
		else {
			counter++;
		}
	}
	cout << counter;
}

