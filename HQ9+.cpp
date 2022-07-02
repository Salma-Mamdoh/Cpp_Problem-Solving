// HQ9+.cpp : 
#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int counter = 0;
	bool is_exist = false;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9' ) {
			is_exist = true;
		}
		else if (str[i] == '+') {
			counter++;
		}
	}
	if (is_exist) {
		cout << "YES";
		exit(0);
	}
	else if (counter >= 2) {
		cout << "NO";
		exit(0);
	}
	else {
		cout << "NO";
	}
}

