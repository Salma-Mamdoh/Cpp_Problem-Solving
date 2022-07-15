// Colorful Stones (Simplified Edition).cpp : 
#include <iostream>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int counter = 0;
	for(int i=0 ; i<str2.length(); i++){
		if(str2[i]==str1[counter]){
			counter++;
		}
	}
	cout << counter+1;
}

