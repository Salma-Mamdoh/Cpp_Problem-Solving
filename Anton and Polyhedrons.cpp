// Anton and Polyhedrons.cpp :
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string>input;
    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        input.push_back(str);

    }
    int sum = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == "Tetrahedron") {
            sum += 4;
        }
        else if (input[i] == "Cube") {
            sum += 6;
        }
        else if (input[i] == "Octahedron") {
            sum += 8;
        }
        else if (input[i] == "Dodecahedron") {
            sum += 12;
        }
        else if (input[i] == "Icosahedron") {
            sum += 20;
        }
    }
    cout << sum;
}

