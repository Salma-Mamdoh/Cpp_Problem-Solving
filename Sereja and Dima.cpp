// Sereja and Dima.cpp :
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int z;
	int s=0;
	int d=0;
	vector<int>vec;
	for (int i = 0; i < x; i++) {
		cin >> z;
		vec.push_back(z);
	}
	for (int i = 1; i <= x; i++) {
		if (i % 2 != 0) {
			if (vec[0] > vec[vec.size()-1]) {
				s += vec[0];
				vec.erase(vec.begin());
			}
			else {
				s += vec[vec.size() - 1];
				vec.pop_back();
			}
		}
		else {
			if (vec[0] > vec[vec.size()-1] ){
				d += vec[0];
				vec.erase(vec.begin());
			}
			else {
				d += vec[vec.size()-1];
				vec.pop_back();
			}
		}
	}
	cout << s << " " << d;
}

