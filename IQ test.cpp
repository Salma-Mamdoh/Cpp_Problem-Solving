// IQ test.cpp : 

#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int z;
	cin >> z;
	int x;
	int counteven = 0, countodd = 0;
	int output=0;
	vector<int>vec;
	for (int i = 0; i < z; i++) {
		cin >> x;
		vec.push_back(x);
	}
	for (int i = 0; i < z; i++) {
		if (vec[i] % 2 == 0) {
			counteven++;
		}
		else {
			countodd++;
		}
	}

	if (counteven > countodd) {
		for (int i = 0; i < z; i++) {
			if (vec[i] % 2 != 0) {
				output= i;
			}
		}
	}
	else if (countodd > counteven) {
		for (int i = 0; i < z; i++) {
			if (vec[i] % 2 == 0) {
				output=i;
			}
		}
	}
	cout << output+1;
}

