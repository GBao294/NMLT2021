// quyhoachdong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int fibo(int n)
{
	int f, f1, f2;
	f1 = f2 = 1;
	for (int i = 3; i <= n; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}
int main()
{
	int n;
	cin >> n;
	cout << fibo(n);
}

