

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	if (isupper(str[0])) {
		cout << str;
	}
	else {
		str[0] = char(toupper(str[0]));
		cout << str;
	}

}

