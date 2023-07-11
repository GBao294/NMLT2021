#include <iostream>
using namespace std;
void nhapmang(int A[], int &N)
{
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
}
void xoa(int a[], int n, int x)
{
	int k = 0;
	if (a[n-1] == x)
	{
		a[n-1] = 1;
		if (x == 1)
			a[n-1] = 0;
	}
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
void xuatmang(int A[], int &N)
{
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
}

int main()
{
	int a[100], n, x;
	int dem = 0;
	cin >> n;
	nhapmang(a, n);
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	xoa(a, n, x);
	n = n - dem;
	xuatmang(a, n);
	return 0;
}