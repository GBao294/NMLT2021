#include <iostream>
using namespace std;
struct PhanSo
{
	float tu, mau;
};
void Nhap(PhanSo &a)
{
	fflush(stdin);
	cin >> a.tu;
	fflush(stdin);
	cin >> a.mau;
}
PhanSo Nhap()
{
	PhanSo a;
	fflush(stdin);
	cin >> a.tu;
	fflush(stdin);
	cin >> a.mau;
	return a;
}
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a % b);
}
PhanSo Cong(PhanSo a, PhanSo b)
{
	PhanSo c;
	c.tu = a.tu*b.mau + a.mau*b.tu;
	c.mau = a.mau*b.mau;
	return c;
}
void Xuat(PhanSo a)
{
	int c;
	if (a.tu == 0)
	{
		if (a.mau != 0)
			cout << 0 << endl;
	}
	else
	{
		int c, t, m;
		c = UCLN(a.tu, a.mau);
		t = fabs(a.tu / c);
		m = fabs(a.mau / c);
		if (a.tu / a.mau < 0) t = -t;
		cout << t;
		if (m == 1) cout << endl;
		else cout << "/" << m << endl;
	}
}
int main() 
{
	PhanSo a, b;
	Nhap(a);
	b = Nhap();
	Xuat(Cong(a, b));
	return 0;
}
