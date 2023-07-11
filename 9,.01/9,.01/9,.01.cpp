#include <iostream>
#include <math.h>
using namespace std;
int SoNguyenTo(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}return 1;
}
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
	if (n <= 0) cout << "Mang rong.";
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
			cout << A[i] << " ";
	}
	cout << endl;
}
void TichSole_VTSNT(int *&A, int &n)
{
	if (n > 0) {
		int k = 1, kt = 0;
		for (int i = 2; i < n; i++)
			if (SoNguyenTo(i))
			{
				if ((A[i] % 2) != 0)
				{
					k *= A[i];
					kt = 1;
				}
			}
		if (kt == 1) cout << "Tich cac so le o vi tri la so nguyen to la: " << k;
		else cout << "Khong tim duoc so le o vi tri la so nguyen to, tich la: 0";
	}
}

int main()
{
	int *arr, n;

	NhapMang(arr, n);
	XuatMang(arr, n);
	TichSole_VTSNT(arr, n);

	return 0;
}