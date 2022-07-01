//Boy or Girl.cpp:
#include<iostream>
#include<string>
using namespace std;
int main() {
	int counter = 0;
	string str;
	cin >> str;
	int sum = str.length();
	for (int i = 0; i < str.length(); i++) {
		for (int j = i+1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				sum--;
				break;
			}
		}
	}
	if (sum % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
}
