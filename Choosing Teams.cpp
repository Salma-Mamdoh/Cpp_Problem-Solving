// Choosing Teams.cpp : 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n, t,z;
    cin >> n >> t;
    vector<int>vec;
    for (int i = 0; i < n; i++) {
        cin >> z;
        if (z + t <= 5) {
            vec.push_back(z);
        }
        else {
            continue;
        }
    }
    cout << vec.size() / 3;



}

