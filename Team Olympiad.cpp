// Team Olympiad.cpp : 
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int z;
    vector<int>p;
    vector<int>m;
    vector<int>s;
    int counterp = 0, counterm = 0, counters = 0;
    int num_teams;
    for (int i = 0; i < n; i++) {
        cin >> z;
        if (z == 1) {
            counterp++;
            p.push_back(i+1);
        }
        else if (z == 2) {
            counterm++;
            m.push_back(i+1);
        }
        else {
            counters++;
            s.push_back(i+1);
        }
    }
    

    num_teams=min(counterp,min(counterm,counters));
    cout << num_teams << endl;
    
    if (num_teams > 0) {
        for (int j = 0; j < num_teams; j++) {
            cout << p[j] << " " << m[j] << " " << s[j] << endl;
        }
   }
   
}

