// Police Recruits.cpp :
#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cin >> x;
	vector<int>vec;
	int o;
	int sum = 0;
	int counter = 0;
	for (int i = 0; i < x; i++) {
		cin >> o;
		vec.push_back(o);
	}
	for (int i = 0; i < x; i++) {
		if (sum + vec[i] < 0) {
			counter++;
		}
		else {
			sum += vec[i];
		}
	}
	cout << counter;
}

