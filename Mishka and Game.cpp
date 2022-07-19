// Mishka and Game.cpp :
#include <iostream>
using namespace std;
int main()
{
	int n, x=0;
	cin >> n;
	int sumM = 0;
	int sumC = 0;
	while (x < n) {
		int a, b;
		cin >> a >> b;
		if (a == b) {
			sumC += 1;
			sumM += 1;
		}
		else if (a > b) {
			sumM+=1;
		}
		else {
			sumC+=1;
		}

		x++;
	}

	if (sumM > sumC) {
		cout << "Mishka";

	}
	else if (sumC > sumM) {
		cout << "Chris";
	}
	else {
		cout << "Friendship is magic!^^";
	}

}

