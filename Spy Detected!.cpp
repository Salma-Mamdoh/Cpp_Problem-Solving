// Spy Detected!.cpp :
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>vec;
	while ( n--) {
		int z, y;
		cin >> z;
		for (int i = 0; i < z; i++) {
			cin >> y;
			vec.push_back(y);
		}
		for (int i = 0; i < vec.size()-1; i++) {
			if (vec[0] != vec[1] && vec[1]==vec[2]) {
				cout << 1 << endl;
				goto end;
			}
			else if (vec[i] != vec[i + 1]) {
				cout << i + 2 << endl;
				goto end;
			}
			
		}
		end:
		vec.clear();
	}
	
}

