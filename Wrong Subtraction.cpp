// Wrong Subtraction.cpp 
#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	while (num2 > 0) {
		if (num1 % 10 == 0) {
			num1 = num1 / 10;
		}
		else if (num1 == 1) {
			num1 = 1;
		}
		else {
			num1 -= 1;
		}

		num2--;
	}
	cout << num1;
}