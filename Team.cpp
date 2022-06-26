// Team.cpp : 

#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	string str;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		getline(cin, str);
		str.erase(remove(str.begin(), str.end(), ' '), str.end());
		if ((str[0] == '1' && str[1] == '1') || (str[1] == '1' && str[2] == '1') || (str[2] == '1' && str[1] == '1') || 
			str[0]=='1'&& str[2]=='1') {
			counter++;

		}
	}
	cout << counter;
}