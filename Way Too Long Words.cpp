// Way Too Long Words.cpp 
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void fun(string strr){
	int x;
	if (strr.length() > 10) {
		x = (strr.length()) - 2;
		cout<<strr[0] << x << strr[x + 1]<<endl;
	}
	else {
		cout<< strr<<endl;
	}
	}
int main()
{
	vector<string>vec;
	string str;
	int n;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		vec.push_back(str);
	}
	for_each(vec.begin(), vec.end(), fun);
	
}

