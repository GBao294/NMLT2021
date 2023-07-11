// 3.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, dx, i, a, b, c;
	i = 0;
	dx = 0;
	cin >> n;
	b = n;
	c = n;
	
		for (; n != 0;)
		{
			n /= 10;
			i++;
		}
		a = i;
		for (; b != 0; )
		{
			a -= 1;
			dx += (b % 10)*pow(10, a);
			b /= 10;
		}
		if (dx == c)
			cout << "true";
		else
			cout << "false" << i;
	


}