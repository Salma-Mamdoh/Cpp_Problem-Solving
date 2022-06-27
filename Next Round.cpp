// Next Round.cpp :

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int x, y,counter=0;
	cin >> x >> y;
	int z;
	vector <int>vec;
	for (int i = 0; i < x; i++) {
		cin >> z;
		vec.push_back(z);
	}
	for (int i = 0; i < x; i++) {
		if (vec[i] >= vec[y-1] && vec[i]!=0) {
			counter++;
		}
	}
	cout << counter;
}