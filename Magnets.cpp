// Magnets.cpp : 
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int counter = 1;
	int z; 
	vector<int>vec;
	for (int i = 0; i <  n; i++) {
		cin >> z;
		vec.push_back(z);
	}
	for (int i = 0; i < n-1 ; i++) {
		if (vec[i] == 10 && vec[i + 1] == 10) {
			continue;
		}
		else if (vec[i] == 10 && vec[i + 1] == 01) {
			counter++;
		}
		else if (vec[i] == 01 && vec[i + 1] == 10) {
			counter++;
		}
	}
	cout << counter;

	}