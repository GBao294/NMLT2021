
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c, DTB;
	cin >> a >> b >> c;	
	if (a<=10&&b<=10&&c<=10&&a>=0&&b>=0&&c>=0)
		DTB = (a + b + c) / 3;
		cout << "DTB = " << setprecision(2) << fixed << DTB <<endl;
		cout << endl;
		if (10>= DTB && DTB >= 9) cout << "Loai: XUAT XAC";
		if (9 >  DTB && DTB >= 8) cout << "Loai: GIOI";
		if (8 >  DTB && DTB >= 7) cout << "Loai: KHA";
		if (7 >  DTB && DTB >= 6) cout << "Loai: TB KHA";
		if (6 >  DTB && DTB >= 5) cout << "Loai: TB";
		if (5 >  DTB && DTB >= 4) cout << "Loai: YEU";
		if (4>DTB) cout << "Loai: KEM";
}
