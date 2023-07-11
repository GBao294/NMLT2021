#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void NhapMang(int *&A, int &n)
{
	A = new int[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
}
void XuatMang(int *&A, int &n)
{
	if (n == 0) cout << "Mang rong.";
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
	}
	delete[]A;
}
int main()
{
	int *arr, n;
	NhapMang(arr, n);
	XuatMang(arr, n);
	return 0;
}