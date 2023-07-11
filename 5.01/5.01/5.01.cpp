// 5.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int modulo(int m, int n) 
{
	if (m >= n)
	{
		m = m - n;
		return modulo(m, n);
	}return m;
}


int main() {
	int m, n; cin >> m >> n;
	cout << modulo(m, n);
}

