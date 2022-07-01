// Queue at the School.cpp :

#include <iostream>
#include<string>
using namespace std;
int main(){
        int counter, n;
        string str;
        cin >> counter >> n;
        cin >> str;
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < str.length(); j++)
            {
                if (str[j] == 'B' && str[j + 1] == 'G')
                {
                    swap(str[j], str[j + 1]);
                    j++;
                }
            }
        }
        cout << str;
    }

   

