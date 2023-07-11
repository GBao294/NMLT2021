#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char c1;
	char c2;
	int x;
	cout << "nhap ky tu c1: ";
	cin >> c1;
	cout << "nhap ky tu c2: ";
	cin >> c2;
	cout << "nhap so x: ";
	cin >> x;
	cout << "Ma ASCII cua ky tu " << c1 << "," << c2 << " lan luot la " << static_cast<int>(c1) << " va " << static_cast<int>(c2) << endl;
	cout << "Khoang cach giua hai ki tu " << c1 << ", " << c2 << " la " << static_cast<int>(c1) - static_cast<int>(c2) << endl;
	cout << "Dang viet hoa cua ky tu " << c1 << " la " << static_cast<char>(static_cast<char>(c1) - 32) << endl;
	cout << x << " la ma ASCII cua ky tu " << static_cast<char>(x) << endl;



	return 0;
}