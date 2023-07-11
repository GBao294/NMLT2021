// 4.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int reverse(int n)
{
	int r,dx = 0;
	for (; n != 0;)
	{
		r = n % 10;
		dx = dx * 10 + r;
		n /= 10;
	}
	return dx;

}

int main() 
{
	int n;
	cin >> n;
	cout << reverse(n);
}
