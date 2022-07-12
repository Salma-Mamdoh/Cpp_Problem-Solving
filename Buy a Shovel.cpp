// Buy a Shovel.cpp : 
#include <iostream>
#include<string>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int counter = 1;
	while(true) {
		if (((x*counter) % 10 == 0) || ((x * counter) % 10 == y)) {
			cout << counter;
			break;
		}
		else {
			counter++;
		}
	}
	
}

