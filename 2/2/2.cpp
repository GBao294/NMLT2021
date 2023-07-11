// 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a, b, c;
    cout << "Nhap vao canh hinh vuong\n";
	cin >> a;
	b = a * a;
	c = 4 * b;
	cout << setprecision(2) << fixed << "Chu vi = " << c << endl << "Dien tich = " << b << endl;

}
