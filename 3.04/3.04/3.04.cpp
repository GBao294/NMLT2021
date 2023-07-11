// 3.04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	double n, pi;
	pi = 0;
	cin >> n;
	if (n >= 1)
	{
		for (int i = 0; i <= n; i++)
		{

			pi += (pow(-1, i) / (2 * i + 1)) * 4;
		}

		cout << pi;
	}
}

