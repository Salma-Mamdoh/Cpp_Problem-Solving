// Shaass and Oskols.cpp :
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n, z;
	cin >> n;
	vector<int>vec;
	for (int i = 0; i < n; i++) {
		cin >> z;
		vec.push_back(z);
	}

	int repeat;
	cin >> repeat;
	while (repeat--) {
		int a, b;
		cin >> a >> b;
		--a;
		if (a !=0 ) {
			vec[a - 1] += b - 1;
		}
		if (a != n - 1) {
			vec[a + 1] += vec[a] - b;
		}
		vec[a] = 0;
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}
