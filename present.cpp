// present.cpp : 
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n,z;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++) {
        cin >> z;
        vec.push_back(z);
    }

    vector<int>output;
    for (int j = 1; j <n+1; j++) {
        for (int i = 1; i < n+1; i++) {
            if (j == vec[i-1]) {
                output.push_back(i);
            }
        }
    }

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
}

