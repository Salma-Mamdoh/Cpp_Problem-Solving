// Nearly Lucky Number.cpp 

#include <iostream>
using namespace std;
int main()
{

    int counter = 0;
    string str;
    cin >> str;
    bool x = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '4' || str[i] == '7'){
            counter++;
        }
    }
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] == '4' && str[i + 1] == '7') || (str[i] == '7' && str[i + 1] == '4')) {
            x = true;
            break;
        }
    }
    if (counter == 4 || counter == 7) {
        cout << "YES";
        exit(0);
    }
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] == '7' || str[i] != '4') && (str[i] == '4' || str[i] != '7') || str.length() <= 1) {
            cout << "NO";
            exit(0);
        }
    }
    if (x && (str.length() % 7 == 0 || str.length() % 4 == 0)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    }
    


