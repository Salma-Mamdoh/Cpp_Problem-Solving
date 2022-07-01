// Soldier and Bananas.cpp : 
#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k>> n>> w;
    int borrow,cost=0;
    for (int i = 1; i < w+1; i++) {
        cost+= i * k;
    }
    borrow = cost - n;
    if (borrow > 0)
        cout << borrow;
    else
        cout << "0";
}

