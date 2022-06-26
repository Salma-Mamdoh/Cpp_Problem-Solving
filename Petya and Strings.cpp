// Petya and Strings.cpp 

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1;
	cin >> str2;
	for (int i = 0; i < str1.length(); i++) {
		str1[i] = char(tolower(str1[i]));
		str2[i] = char(tolower(str2[i]));
	}

	if (str1 > str2) {
		cout << "1";
	}
	else if (str1 < str2) {
		cout << "-1";
	}
	else if (str1 == str2) {
		cout << "0";
	}
}

