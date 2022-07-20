// Holiday Of Equality.cpp : 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,z; 
    cin >>n ;
    int sum = 0;
    vector<int>vec;
    for (int i = 0; i < n; i++) {
        cin >> z;
        vec.push_back(z);
    }
    int max = *max_element(vec.begin(), vec.end());
    for (int i = 0; i < n; i++) {
        if (vec[i] != max) {
            sum += max - vec[i];
        }
    }
    cout << sum;
}
