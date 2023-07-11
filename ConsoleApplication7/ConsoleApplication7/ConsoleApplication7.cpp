// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

void NhapMang(int *&A, int &n)
{
	A = NULL;
	cin >> n;
	A = new int[100];
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
	cout << endl;

}
void SoChinhPhuong_ViTriLe(int A[], int &n)
{
	if (n > 0)
	{
		int dem = 0;
		for (int i = 1; i < n; i += 2)
		{
			int k = sqrt(A[i]);
			if (A[i] == k * k)
			{
				cout << A[i] << " ";
				dem++;
			}

		}
		if (dem > 0)
		{
			cout << endl;
			cout << dem;
		}
		else cout << "Mang khong chua so chinh phuong.";
	}	
	delete[]A;
}
int main()
{
	int *arr, n;

	NhapMang(arr, n);
	XuatMang(arr, n);
	SoChinhPhuong_ViTriLe(arr, n);

	return 0;
}