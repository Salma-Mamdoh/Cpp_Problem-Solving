// Stones on the Table.cpp :

#include <iostream>
using namespace std;
int main()
{
	int counter = 0;
	int num;
	string str;
	cin >> num;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == str[i + 1]) {
			counter++;
		}
	}
	cout << counter;
}

