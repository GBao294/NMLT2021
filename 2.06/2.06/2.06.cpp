// 2.06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double a, b, c,d;
	cin >> a >> b >> c;
	if (a > b)
	{
		d = a;
		a = b;
		b = d;
	}
	if (a > c)
	{
		d = a;
		a = c;
		c = d;
	}
	if (b > c)
	{
		d = b;
		b = c;
		c = d;
	}
	cout << a << " " << b << " " << c;
		 
}
