// Divisibility Problem1.cpp : 
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 0;
	while (x < n) {
		int a, b;
		cin >> a >> b;
		if (a % b != 0) {
			cout << b - (a % b) << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	x++;
}

