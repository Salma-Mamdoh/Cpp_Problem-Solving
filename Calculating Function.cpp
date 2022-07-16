// Calculating Function.cpp : 

#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	long long int n;
	cin >> n;
	if (n % 2 == 1) {
		cout << -(n + 1) / 2;
	}
	else {
		cout << n / 2;
	}
}

