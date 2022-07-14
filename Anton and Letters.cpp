// Anton and Letters.cpp : 
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	string str2;
	if (str[0] == '{'&& str[1]=='}') {
		cout << "0";
		exit(0);
	}
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '{' || str[i] == ',' || str[i] == '}' || str[i] == ' ') {
			continue;
		}
		else {
			str2 += str[i];
		}
	}
	
	sort(str2.begin(), str2.end());
	int counter = str2.size();
	for (int i = 0; i < str2.size() - 1; i++) {
		if (str2[i] == str2[i + 1]) {
			counter--;
		}
	}
	cout << counter;
}
