// Bit++.cpp :
#include <iostream>
using namespace std;
int main()
{
    int n,x=0;
    string order;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order=="++X" || order == "X++")
          x++;
        else if (order=="--X" || order=="X--")
           x--;
   }
    cout << x;
}

