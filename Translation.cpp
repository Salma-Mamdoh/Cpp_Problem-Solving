// Translation.cpp 
#include <iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	string str1,str2;
	cin >> str1 >> str2;
	bool is_true = false;
	int counter = 0;
	
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] == str2[str1.length()-1-i]) {
			is_true = true;
			counter++;
		}
		else {
			is_true = false;
		}
	}
	if (is_true==1 && counter==str1.length()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}

