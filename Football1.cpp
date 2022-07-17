// Football1.cpp : 
#include <iostream>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int count0 = 0;
	int count1 = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '1') {
			count1++;
		}
		else if (str[i] == '0') {
			count0++;
		}

		if (count1 < 7 && str[i] == '0') {
			count1 = 0;
		}
		else if (count0 < 7 && str[i] == '1') {
			count0 = 0;
		}
	}

	if (count1 >= 7 || count0 >= 7) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}

