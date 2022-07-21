// Pangram.cpp :
#include <iostream>
#include<vector>
using namespace std;
void remove(vector<char>& v)
{
	auto end = v.end();
	for (auto it = v.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}

	v.erase(end, v.end());
}

int main() {
	int n;
	cin >> n;
	vector<char>vec;
	char z;
	for (int i = 0; i < n; i++) {
		cin >> z;
		vec.push_back(z);
	}
	for (int i = 0; i < n; i++) {
		vec[i]=char(tolower(vec[i]));
	}

	remove(vec);
	/*for (int i = 0; i < vec.size(); i++) {
		cout << vec[i];
	}*/
	if (vec.size() == 26) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}