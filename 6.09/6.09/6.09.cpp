// 6.09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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
void xoa(int a[],int &n ,int p, int k)
{

	while (p < n - k )
	{
		a[p] = a[p + k];
		p++;
		
	}
	n -= k;
}
int main()
{
	int a[100],n,p,k;
	cin >> n;
	nhapmang(a, n);
	cin >> p >> k;
	xoa(a,n, p, k);
	xuatmang(a, n);

}

