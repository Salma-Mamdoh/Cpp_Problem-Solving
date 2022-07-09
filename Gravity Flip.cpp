// Gravity Flip.cpp : 

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int x,z;
    cin >> x;
    vector<int>vec;
    for (int i = 0; i < x; i++) {
        cin >> z;
        vec.push_back(z);
    }
    sort(vec.begin(), vec. end());

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i]<<" ";
    }
}

