// Twins .cpp:
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,sum2=0,sum3=0,counter=0;
	cin >> n;
	vector<int>vec;
	int z;
	for (int i = 0; i < n; i++) {
		cin >> z;
		vec.push_back(z);
	}

	for (int i = 0; i < n; i++) {
		sum3 = sum3 + vec[i];
	}
	
	sort(vec.begin(), vec.end(),greater<int>());
	for (int i = 0; i < n; i++) {
		if(sum2 <= sum3) {
			sum2 += vec[i];
			sum3 -= vec[i];
			counter++;
		}
	}
	cout << counter;
}

