// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
typedef struct DATHUC
{
	int k;
	float heso;
	int mu;
}DT;
DATHUC* Nhap()
{
	int n;
	cin >> n;
	DATHUC *c = new DATHUC[100];
	int i = 0;
	for (; i < n; i++)
	{
		cin >> c[i].heso;
		cin >> c[i].mu;
	}
	c[i].mu = -1;
	return c;
}
int dem(DATHUC A[])
{
	int i = 0;
	do
	{
		i++;
	} while (A[i].mu != -1);
	return i;
}
void Xuat(DATHUC d[])
{
	int thutu = dem(d);
	int i = 0;
	do
	{
		if (d[i].heso == 0)
		{
			i++;
			continue;
		}
		if (d[i].heso != 1)
			cout << d[i].heso;
		if (d[i].mu != 0 && d[i].mu != 1)
			cout << "x^" << d[i].mu;
		else if (d[i].mu == 1)
			cout << "x";
		else if (d[i].heso == 1)
			cout << 1;
		else cout << " ";

		if (i < thutu - 1 && d[i + 1].heso>0)
			cout << "+";
		i++;
	} while (i < thutu);
	int kt = 0;
	for (int i = 0; i < thutu - 1; i++)
		if (d[i].heso != 0)
			kt = 1;
	if (kt == 0) cout << 0;
}
void tong(DATHUC dt[], DATHUC dtb[], DATHUC X[], int a, int b)
{
	int temp = 0;
	int max, min;
	max = dt[0].mu;
	if (dt[0].mu < dtb[0].mu) max = dtb[0].mu;
	min = dt[a - 1].mu;
	if (dt[a - 1].mu > dtb[b - 1].mu) min = dtb[b - 1].mu;
	int i = 0;
	for (int j = max; j >= min; j--)
	{
		X[i].heso = 0;
		X[i].mu = 0;
		int kt = 1, x = 0, y = 0;
		for (; x < a; x++)
		{
			if (dt[x].mu == j)
			{
				X[i].mu = j;
				X[i].heso += dt[x].heso;
			}
		}
		for (; y < b; y++)
		{
			if (dtb[y].mu == j)
			{
				X[i].mu = j;
				X[i].heso += dtb[y].heso;
			}
		}
		if (X[i].mu == j) i++;
	}

	X[a].mu = -1;
}
DATHUC *Tong2DaThuc(DATHUC A[], DATHUC B[])
{
	DATHUC *X = new DATHUC[100];
	int a = dem(A);
	int b = dem(B);
	if (a >= b)
	{
		tong(A, B, X, a, b);
	}
	else {
		tong(B, A, X, b, a);
	}
	return X;
}
int main() {
	DATHUC *A, *B;
	A = Nhap();
	B = Nhap();
	cout << "Da thuc A: "; Xuat(A);
	cout << "\nDa thuc B: "; Xuat(B);
	cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
	return 0;
}
