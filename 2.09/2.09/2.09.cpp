﻿#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	float a, b, c,p,dt;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	dt = sqrt(p*(p - a)*(p - b)*(p - c));
	if (a + b > c &&a + c > b&&b + c > a)
		if (a*a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) cout << "Tam giac vuong, " << "dien tich = " << setprecision(2) << fixed << dt;
		else if (a == b && b == c)
			cout << "Tam giac deu, " << "dien tich = " << setprecision(2) << fixed << dt;
		else if (a == b || a == c || b == c)
			cout << "Tam giac can, " << "dien tich = " << setprecision(2) << fixed << dt;
		else cout << "Tam giac thuong, " << "dien tich = " << setprecision(2) << fixed << dt;
	else
		cout << "Khong phai tam giac";
}