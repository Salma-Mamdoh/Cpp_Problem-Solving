// Anton and Danik.cpp 

#include <iostream>
using namespace std;
int main()
{
    int n,counter1=0,counter2=0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            counter1++;
        }
        else if (str[i] == 'D') {
            counter2++;
        }
    }

    if (counter1 > counter2) {
        cout << "Anton";
    }
    else if (counter2 > counter1) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
}
