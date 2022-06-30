// Lucky Division.cpp : 

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int counter = 0;
    int s;
    string str;
    cin >> str;
    bool is_luckey = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '4' || str[i] == '7') {
            counter++;
        }
    }
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] == '4' && str[i + 1] == '7') || (str[i] == '7' && str[i + 1] == '4')) {
            is_luckey = true;
            break;
        }
    }
    if (counter == 4 || counter == 7) {
        cout << "YES";
        exit(0);
    }
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] == '7' || str[i] != '4') && (str[i] == '4' || str[i] != '7') || str.length() <= 1) {
            is_luckey=false;
        }
    }
    if (is_luckey) {
        cout << "YES";
        exit(0);
    }
   
    
    s = stoi(str);
    if ((s % 7 == 0) || (s % 4 == 0) || (s%47==0)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }


}

