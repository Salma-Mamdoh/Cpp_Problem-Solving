// The New Year: Meeting Friends 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>num;
	int z;
	for (int i = 0; i < 3; i++) {
		cin >> z;
		num.push_back(z);
	}
	sort(num.begin(), num.end());
	int sum = (num[2] - num[1])+(num[1]-num[0]);
	cout << sum;

}

