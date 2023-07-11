// 6.06.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void sapxep(int a[], int &n)
{
	int i = 0;
	while (i < n - 1)
	{
		int vtmin = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[vtmin])
				vtmin = j;
		swap(a[i], a[vtmin]);
		i++;
	}
}

int main()
{
	int a[100], n, dem=0;
	cin >> n;
	nhapmang(a, n);
	sapxep(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[n-1])
			dem++;
	}
	cout << a[n - 1] << endl << dem;
}


