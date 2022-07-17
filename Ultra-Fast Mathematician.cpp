// Ultra-Fast Mathematician.cpp :
#include <iostream>
using namespace std;
int main()
{
	string str;
	string str1;
	cin >> str>> str1;
	string output = "";
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] == '0' && str1[i] == '1') || (str[i] == '1' && str1[i] == '0')) {
			output += '1';
		}
		else {
			output += '0';
		}
	}
	cout << output;
}

