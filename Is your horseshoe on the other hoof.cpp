//Is your horseshoe on the other hoof?:
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main() {
	int counter = 0;
	int arr[4];
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+4);
	for (int i = 0; i < 4; i++) {
		if (arr[i] == arr[i + 1]) {
			counter++;
		}
	}
	cout << counter;
}