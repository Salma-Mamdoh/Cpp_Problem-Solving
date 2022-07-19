// Remove Smallest.cpp : 
#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 0;
	vector<int>finalr;
	vector<int>output;
	while (x < n) {
		int y,z;
		cin >> y;
		int counter = 0;
		vector<int>arr;
		
		for (int i = 0; i < y; i++) {
			cin >> z;
			arr.push_back(z);
		}
		sort(arr.begin(), arr.end());
		for (int i = 0; i < y-1; i++) {
			if (abs(arr[i + 1] - arr[i]) == 0 || abs(arr[i + 1] - arr[i]) == 1) {
				output.push_back(arr[i]);
			}
			if (i == y - 2) {
				if (abs(arr[y - 1] - arr[y - 2]) == 0 || abs(arr[y - 1] - arr[y - 2]) == 1) {
					output.push_back(arr[y - 1]);
				}
			}
			else {
				continue;
			}
		}
		/*for (int i = 0; i < output.size(); i++) {
			cout << output[i];
		}*/
		if (output.size() == y || y == 1) {
			finalr.push_back(1);
		}
		else {
			finalr.push_back(0);
		}
		x++;
		output.clear();
	}

	for (int i = 0; i < finalr.size(); i++) {
		if (finalr[i] == 0) {
			cout << "NO"<<endl;
		}
		else {
			cout << "YES"<<endl;
		}
	}
}

