// Hulk.cpp :

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str1 = "it";
    string str2 = "that";
    string output = "";
    if (n == 1) {
        cout << "I hate it";
        exit(0);
    }
    for (int i = 1; i < n; i++) {
        if (i % 2 != 0) {
            output += "I hate that ";
        }
        else {
            output += "I love that ";
        }
    }

    if (n % 2 == 0) {
        cout << output << " " << "I love it";
    }
    else {
        cout << output << " " << "I hate it";
    }

}

