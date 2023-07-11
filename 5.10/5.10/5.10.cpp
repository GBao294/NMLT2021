
#include <iostream>
#include <cmath>
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
int input()
{
	int n;
	do
	{
		cin >> n;
		if (n <= 0 || n > 50)cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
	} while (n <= 0 || n > 50);
	return n;
}
int main() 
{
	int n;
	n = input();
	int dem = 0; 
	int tong = 0;
	int i = 2;   
	while (dem < n)
	{
		if (SoNguyenTo(i))
		{
			tong += i;
			dem++;
		}
		i++;
	}
	cout << "Tong " << dem << " so nguyen to dau tien la: " << tong;
}