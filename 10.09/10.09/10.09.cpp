// 10.09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
using namespace std;
struct DATHUC
{
	int n;
	double heso[100];
	double mu[100];
};
DATHUC *Nhap()
{
	int n;
	cin >> n;
	DATHUC *c = new DATHUC;
	for (int i = 0; i < n; i++)
	{
		cin >> c->heso[i];
		cin >> c->mu[i];
	}
	c->n = n;
	return c;
}
void Xuat(DATHUC A)
{
	int n = A.n;
	int i = 0;
	do
	{
		if (A.heso[i] == 0)
		{
			i++; continue;
		}
		if (A.heso[i] != 1 && A.heso[i] != -1) cout << A.heso[i];
		if (A.heso[i] == -1 && i < n - 1) cout << "-";
		if (A.heso[i] == -1 && i == n - 1) cout << A.heso[i];
		if (A.mu[i] != 0 && A.mu[i] != 1) cout << "x^" << A.mu[i];
		else if (A.mu[i] == 1) cout << "x";
		else if (A.heso[i] == 1) cout << 1;
		else cout << " ";
		if (i < n - 1 && A.heso[i + 1] >= 0) cout << "+";
		i++;
	} while (i < n);
	int kt = 0;
	for (int i = 0; i < n; i++)
		if (A.heso[i] != 0) kt = 1;
	if (kt == 0)cout << 0;
}
double TinhDaThuc(DATHUC A, double x)
{
	int n = A.n;
	double s = 0;
	for (int i = 0; i < n; i++)
	{
		double a = A.heso[i], b = pow(x, A.mu[i]);
		s += a * b;
	}
	return s;
}
int main() {
	DATHUC *A; A = Nhap();
	cout << "Da thuc vua nhap la: "; Xuat(*A);
	double x; cin >> x;
	cout << "\nVoi x=" << x << ", gia tri da thuc la: "
		<< setprecision(2) << fixed << TinhDaThuc(*A, x);
	return 0;
}