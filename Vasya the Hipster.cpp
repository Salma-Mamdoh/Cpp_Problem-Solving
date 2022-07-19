// Vasya the Hipster.cpp :
#include <iostream>
using namespace std;
int main()
{
	int red, blue;
	cin >> red >> blue;
	int differ = 0; 
	int same = 0;
	if (red > blue) {
		differ = blue;
		red -= blue;
		same = red / 2;
	}
	else {
		differ = red;
		blue -= red;
		same = blue / 2;
	}
	cout << differ << " " << same;
}

