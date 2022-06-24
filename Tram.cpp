// Tram.cpp 
#include<iostream>
using namespace std;
int main() {
	int n,exit, enter, max_capcity, pass;
	cin >> n;
	cin >> exit >> enter;
	max_capcity = enter;
	pass = enter;
	for (int i = 1; i < n; i++) {
		cin >> exit >> enter;
		pass = pass + enter - exit;
		if (max_capcity < pass) {
			max_capcity = pass;
		}

	}
	cout << int(max_capcity);
	return 0;
}
