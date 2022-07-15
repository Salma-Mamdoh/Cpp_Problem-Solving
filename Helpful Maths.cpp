// Helpful Maths.cpp 
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	vector<char>vec;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '+') {
			continue;
		}
		else {
			vec.push_back(str[i]);
		}
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++) {
		if (i < vec.size() - 1) {
			cout << vec[i] << "+";
		}
		else {
			cout << vec[i];
		}
	}

}

