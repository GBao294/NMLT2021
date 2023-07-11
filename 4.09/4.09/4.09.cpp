// 4.09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int sum_all_square(int n)
{
	int s = 0;
	for (int i = 1; (i*i) <= n; i++)
		if (n % (i*i) == 0)
			s += (i*i);
	return s;
			

}
int main() 
{
	int n;
	cin >> n;
	cout << sum_all_square(n);
}
