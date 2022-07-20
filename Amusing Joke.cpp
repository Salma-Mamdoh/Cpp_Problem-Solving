// Amusing Joke.cpp :
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str,str1,str3;
    cin >> str>>str1>>str3;
    string newstr = str + str1;
    sort(newstr.begin(), newstr.end());
    sort(str3.begin(), str3.end());
    if (newstr == str3) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

