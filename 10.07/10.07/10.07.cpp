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
	for (int i = n - 1; i >= 0; i--)
	{
		a[i].DTB = (a[i].DiemToan + a[i].DiemHoa + a[i].DiemLy) / 3;
		cout << a[i].MASV << "	" << a[i].HoTen << "	" << a[i].NgaySinh << "	" << a[i].GioiTinh << "	" << a[i].DiemToan << "	" << a[i].DiemLy << "	" << a[i].DiemHoa;
		cout.precision(3);
		cout << "	" << a[i].DTB << endl;
	}
}
void SapXepGiamTheoMASV(SinhVien dssv[], int n) // thutu = n
{
	int i = 0;
	while (i < n - 1)
	{
		int vtmin = i;
		for (int j = i + 1; j < n; j++)
			if((strcmp(dssv[j].MASV, dssv[vtmin].MASV) <0))
				vtmin = j;
		swap(dssv[i], dssv[vtmin]);
		i++;
	}
}
int main() 
{
	SinhVien A[MAXN];
	int n;
	Nhap(A, n);
	SapXepGiamTheoMASV(A, n);
	Xuat(A, n);
	return 0;
}
