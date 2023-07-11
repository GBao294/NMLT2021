#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void nhapmang(int A[], int &N)
{
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
}
void xuatmang(int A[], int &N)
{	
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
}
int TimKiem(int a[], int n, int x)
{
	for (int vt = n - 1; vt >= 0; vt -= 1)
		if (a[vt] == x)
			return vt;
	return -1;
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
	n++;// co can hay kh?
}
void xoa(int a[], int &n, int x)
{
	int k = 0;
	while (k < n)
	{
		if (a[k] == x)
		{
			int i = k + 1;
			while (i < n)
			{
				a[i - 1] = a[i];
				i++;
			}
		}
		else k++;
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

bool dx(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
		if (a[i] != a[n - 1 - i])
			return false;
	return true;
}
void nhapmang2(int a[][100], int &m, int &n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void xuatmang2(int a[][100], int &m, int &n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j];
}
bool tgduoi(int a[][100], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i][j] != 0)
				return false;
	return true;
}
bool MTDV(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ((i == j) && a[i][j] != 1 || i != j && a[i][j] != 0)
				return false;
	return true;
}
bool tgtren(int a[][100], int n)
{
	for (int i = 0; i < n ; i++)
		for (int j = 0; j < i; j++)
			if (a[i][j] != 0)
				return false;
	return true;
}
int main()
{
	int a[100][100], n,m;
	nhapmang2(a, n,m);
	cout << a[1];

}