// I Wanna Be the Guy.cpp :
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void remove(vector<int>& v)
{
	auto end = v.end();
	for (auto it = v.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}

	v.erase(end, v.end());
}
int main() {
	int n,n_vec1,n_vec2,z;
	cin >> n;
	cin >> n_vec1;
	vector<int>vec1;
	for (int i = 0; i < n_vec1; i++) {
		cin >> z;
		vec1.push_back(z);
	}
	cin >> n_vec2;
	for (int i = 0; i < n_vec2; i++) {
		cin >> z;
		vec1.push_back(z);
	}
	

	remove(vec1);
	/*for (int i = 0; i < vec1.size(); i++) {
		cout<<vec1[i];
	}*/
	
	if (vec1.size() == n) {
		cout << "I become the guy.";
	}
	else {
		cout << "Oh, my keyboard!";
	}
	
	

}
	
	
  

