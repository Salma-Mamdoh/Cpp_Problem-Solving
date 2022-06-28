// Bear and Big Brother.cpp :

#include <iostream>
using namespace std;
int main()
{
	int w, b;
	cin >> w >> b;
	int counter = 0;
	while (w <= b) {
		w = 3 * w;
		b = 2 * b;
		counter++;
	}
	cout << counter;
}

