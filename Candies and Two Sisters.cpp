// Candies and Two Sisters.cpp :
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 0;
	
	while (x < n) {
		int z;
		cin >> z;
		if (z == 1 || z == 2) {
			cout << 0 << endl;
		}
		else if (z % 2 != 0) {
			cout << z / 2<<endl;
		}
		else {
			cout << z/2 - 1<<endl;
		}
		x++;
	}

}

