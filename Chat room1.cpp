// Chat room1.cpp :
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int counter = -1;
    vector<char>arr = { 'h','e','l','l','o' };
    for (int j = 0; j < 5; j++) {
        for (int i = counter + 1; i < str.length(); i++) {
            if (arr[0] == str[i]) {
                counter = i;
                arr.erase(arr.begin());
                break;
            }
        }
    }
    if (arr.size() == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

