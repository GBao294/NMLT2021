// 4.05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int UCLN(int a, int b) 
{
	if (b == 0) 
		return a;
	return UCLN(b, a % b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << UCLN(a, b);
}

