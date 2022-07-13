// Juicer.cpp : 
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int num, size, d, z;
	int counter = 0,sum=0;
	cin >> num >> size >> d;
	vector<int>vec;
	for (int i = 0; i < num; i++) {
		cin >> z;
		vec.push_back(z);
	}
	for (int i = 0; i < num; i++) {
		if (vec[i] > size) {
			continue;
		}
		else {
			sum += vec[i];
			if (sum > d) {
				counter++;
				sum = 0;
			}
		}
	}
	

	
	cout << counter;
}

