// Soft Drinking.cpp : 
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int m_drink =( k * l)/nl;
	int limes = c * d;
	int salt = p /np;
	cout << (min(m_drink, min(limes, salt)))/n;

}

