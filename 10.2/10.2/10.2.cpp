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
float SoSanh(PhanSo a, PhanSo b)
{
	float c;
	c = a.tu / a.mau - b.tu / b.mau;
	if (c > 0)
		return 1;
	if (c < 0)
		return -1;
	return c;
}
int main() {
	PhanSo a, b;
	Nhap(a);
	b = Nhap();
	float kq = SoSanh(a, b);
	if (kq == 0)
		std::cout << "Hai phan so bang nhau.";
	else if (kq > 0)
		std::cout << "Phan so thu nhat LON hon phan so thu hai.";
	else
		std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
	return 0;
}
