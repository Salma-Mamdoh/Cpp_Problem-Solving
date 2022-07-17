// Young Physicist1.cpp :
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n,z;
	cin >> n;
	vector<int>vec;
	vector<int>output;
	int sum = 0;
	for (int i = 0; i < 3*n; i++) {
		cin >> z;
		vec.push_back(z);
	}
	int y=0;
	while (y <3) {
		for (int i = y; i < 3*n ; i += 3) {
			sum += vec[i];
			if (i == 3 * n) {
				sum += vec[vec.size()];
			}
		}
		output.push_back(sum);
		sum = 0;
		y++;
	}
	int counter = 0;
	for (int i = 0; i < output.size(); i++) {
		//cout << output[i];
		if (output[i] == 0) {
			counter++;
		}
	}


	if (counter == 3) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
