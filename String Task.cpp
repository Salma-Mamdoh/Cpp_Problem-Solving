#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string str;
	string str2="";
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i])) {
			str[i] = char(tolower(str[i]));
		}
	}
	for(int i =0 ; i<str.length(); i++){
	if (str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i') 
		continue;
		str2 += str[i];
		
	}
	
	for (int j = 0; j < str2.length(); j++) {
		cout << "." << str2[j];
	}

}
		

