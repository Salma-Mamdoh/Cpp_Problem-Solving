// George and Accommodation.cpp :

#include <iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int z;
	vector<int>vec;
	int counter = 0;
	
	for (int i = 0; i < 2 * n; i++) {
		cin >> z;
		vec.push_back(z);
	}

	for (int i = 0; i < vec.size()-1; i+=2) {
		if (vec[i] == vec[i + 1]) {
			continue;
			
		}

		else {
			int x = (vec[i + 1] - vec[i]);
				if (x >= 2) {
					counter++;
				}
			}
		
		}
	cout << counter;
	}
	


