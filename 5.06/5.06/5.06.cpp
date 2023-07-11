// 5.06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void input(int &a)
{
	cin >> a;
}
int sum(int a,int &b)
{
	b += a % 10;
	if (a>0)
	return   sum((a / 10), b);
	return 0;
}
int main() 
{
	int n, s=0 ;
	n = 0;
	input(n);
	sum(n, s);
	cout << s;
}


