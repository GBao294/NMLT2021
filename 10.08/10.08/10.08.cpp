#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
	char MASV[10];
	char HoTen[100];
	char NgaySinh[12];
	char GioiTinh;
	float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien a[MAXN], int &n)
{

	cin >> n;
	for (int i = 0; i < n;)
	{

		cin.getline(a[i].MASV, 9);
		cin.getline(a[i].MASV, 9);
		cin.getline(a[i].HoTen, 99);
		cin.getline(a[i].NgaySinh, 11);
		cin >> a[i].GioiTinh;
		cin >> a[i].DiemToan;
		cin >> a[i].DiemLy;
		cin >> a[i].DiemHoa;
		i++;
	}
}
void Xuat(SinhVien a[MAXN], int &n)
{
	for (int i = 0; i < n; i++)
	{
		a[i].DTB = (a[i].DiemToan + a[i].DiemHoa + a[i].DiemLy) / 3;
		cout << a[i].MASV << "	" << a[i].HoTen << "	" << a[i].NgaySinh << "	" << a[i].GioiTinh << "	" << a[i].DiemToan << "	" << a[i].DiemLy << "	" << a[i].DiemHoa;
		cout.precision(3);
		cout << "	" << a[i].DTB << endl;
	}
}
void Nhap(char a[100])
{
	cin.getline(a, 99);
}
void XoaTheoHoTen(SinhVien a[100], int &n, char ten[100])
{
	int k = 0;
	int i = 0;
	while (i < n - 1)
	{
		int vt = i;
		for (int j = i + 1; j < n; j++)
		{
			if ((strcmp(a[j].HoTen, ten) != 0) && ((strcmp(a[vt].HoTen, ten) == 0)))
			{
				vt = j;
				swap(a[vt], a[i]);
				break;
			}
			
		}
		i++;
	}
	for (int i = 0; i < n; i++)
		if ((strcmp(a[i].HoTen, ten) != 0)) k++;
	n = k;
}
int main() {
	SinhVien A[MAXN];
	char hoTenCanXoa[100];
	int n;

	Nhap(hoTenCanXoa);

	Nhap(A, n);

	XoaTheoHoTen(A, n, hoTenCanXoa);

	Xuat(A, n);
	return 0;
}
