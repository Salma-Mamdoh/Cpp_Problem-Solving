// Die Roll.cpp : 
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y;
    double counter = 0;
    if (x > y) {
        z = x;
    }
    else {
        z = y;
    }

    while (z <= 6) {
        counter++;
        z++;
    }
    if (counter == 3) {
        cout << "1/2";
   }
    else if (counter == 1) {
        cout << "1/6";
    }
    else if (counter == 2) {
        cout << "1/3";
    }
    else if (counter == 4) {
        cout << "2/3";
    }
    else if (counter == 5) {
        cout << "5/6";
    }
    else {
        cout << "1/1";
    }
}

