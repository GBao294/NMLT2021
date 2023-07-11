// 4.04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double calculate(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
		s  = sqrt(s+i);
	return s;
}

int main() 
{
	int n;
	cin >> n;
	cout << setprecision(3) << calculate(n);
}
