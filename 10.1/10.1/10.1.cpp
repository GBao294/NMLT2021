#include <iostream>
#include <math.h>
#define MAXN 100
using namespace std;
typedef struct PhanSo
{
	float tu, mau;
};
void Nhap(PhanSo a[MAXN], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].tu;
		cin >> a[i].mau;
	}
}
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a % b);
}
void Xuat(PhanSo a[MAXN], int &n)
{
	int c;
	for (int i = 0; i < n; i++)
	{
		if (a[i].tu == 0)
		{
			if (a[i].mau != 0)
				cout << 0 << endl;
			else cout << "Khong thoa yeu cau bai toan" << endl;
		}
		else
		{
			if (a[i].mau != 0)
			{
				int c, t, m;
				c = UCLN(a[i].tu, a[i].mau);
				t = fabs(a[i].tu / c);
				m = fabs(a[i].mau / c);
				if (a[i].tu / a[i].mau < 0) t = -t;
				cout << t;
				if (m == 1) cout << endl;
				else cout << "/" << m << endl;
			}
			else  cout << "Khong thoa yeu cau bai toan" << endl;
		}
	}
}
int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

