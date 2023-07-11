// Vetcan1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
bool check(int x)
{
	for (int i = 1; i <= sqrt(x); i++)
		if (i*i == x) return 1;
	return 0;
}
bool nguyento(int x)
{
	for (int i = 1; i <= sqrt(x); i++)
		if (x%i == 0)
			return 0;
		else return 1;
}
int max(int a[],int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
		if (max < a[i] && check(a[i]))
			 max = a[i];
	return max;
}
int main()
{
	int a[100], n;
	cout << "Nhap vao so n nguyen duong trong tap C" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] <= 0) i--;
	}
	cout << max(a, n);// so chinh phuong max;

	int m;
	cin >> m;
	for (int i = 0; i < n; i++)
		if (a[i] < m && nguyento(a[i]==1) && a[i]>=2) cout << a[i] << endl; // xuat ra cac so nguyen to nho hon n
}

