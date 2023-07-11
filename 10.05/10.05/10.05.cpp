#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
struct SinhVien {
	char MASV[10];
	char HoTen[100];
	char NgaySinh[12];
	char GioiTinh;
	float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien &a)
{
	cin.getline(a.MASV,9);
	cin.getline(a.HoTen,99);
	cin.getline(a.NgaySinh,11);
	cin >> a.GioiTinh;
	cin >> a.DiemToan;
	cin >> a.DiemLy;
	cin >> a.DiemHoa;
}
void Xuat(SinhVien a)
{
	a.DTB = (a.DiemToan + a.DiemHoa + a.DiemLy) / 3;
	cout << a.MASV <<  "	" << a.HoTen << "	" << a.NgaySinh << "	" << a.GioiTinh << "	" << a.DiemToan << "	" << a.DiemLy << "	" << a.DiemHoa;
	cout.precision(3);
	cout<< "	" << a.DTB;
}
int main() {
	SinhVien A;
	Nhap(A);
	Xuat(A);
	return 0;
}
