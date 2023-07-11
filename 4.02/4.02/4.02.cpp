// 4.02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x)
{
	
	int f1 = 1, f2 = 1;
	if (x == 1 || x == 2)
		return 1;
	int  f;
	for (int i=3;i<=x;i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		
	}
	return f;
}

