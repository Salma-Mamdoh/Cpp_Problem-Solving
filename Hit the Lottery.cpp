// Hit the Lottery.cpp : 
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[5] = { 1,5,10,20,100 };
	int counter = 0;
	while (n != 0) {
		if (n - 100 >= 0) {
			n = n - 100;
			counter++;
		}
		else if (n - 20 >= 0) {
			n = n - 20;
			counter++;
		}
		else if (n - 10 >= 0) {
			n = n - 10;
			counter++;
		}
		else if (n - 5 >= 0) {
			n = n - 5;
			counter++;
		}
		else {
			n = n - 1;
			counter++;
		}

	}
	cout << counter;
}

