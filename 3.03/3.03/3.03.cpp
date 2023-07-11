// 3.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,sum,a;
	sum = 0;
	cin >> n;
	for (; n != 0;)
	{
		a = n % 10;
		sum += a;
		n /= 10;
	}
	cout << sum;
}

