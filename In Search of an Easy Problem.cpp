// In Search of an Easy Problem.cpp : 
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n,counter=0;
	cin >> n;
	int z;
	vector<int>vec;
	for (int i=0; i < n; i++) {
		cin >> z;
		vec.push_back(z);
	}
	for (int i = 0; i < n; i++) {
		if (vec[i] == 1) {
			counter++;
		}
	}
	if (counter > 0) {
		cout << "HARD";
	}
	else {
		cout << "EASY";
	}
}

