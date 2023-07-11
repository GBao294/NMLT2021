// 6.05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void chen(int a[], int &n, int x, int k)
{
	int i = n - 1;
	while (i >= k)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[k] = x;
	n++;
}
void xuatmang(int A[], int &N)
{
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
}
int main()
{
	int a[100], n,x,k;
	cin >> n;
	nhapmang(a, n);
	cin >> x;
	cin >> k;
	if (k <= 6)
	{
		chen(a, n,x,k);
			xuatmang(a, n);
	}
	return 0;
}


