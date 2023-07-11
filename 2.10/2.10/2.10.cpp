#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (c <= 0)
		cout << "Nam khong hop le.";
	else
	{

		switch (b)
		{
		case 2:
		{
			if (((c % 4 == 0) & (c % 100 != 0)) || (c % 400 == 0))
			{
				if ((a < 1) || (a > 29))
					cout << a << "/" << b << "/" << c << " la ngay khong hop le.";
				else cout << a << "/" << b << "/" << c << " la ngay hop le.";
			}
			else
			{
				if ((a < 1) || (a > 28))
					cout << a << "/" << b << "/" << c << " la ngay khong hop le.";
				else cout << a << "/" << b << "/" << c << " la ngay hop le.";
			}
			break;
		}
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if ((a < 1) || (a > 31))
				cout << a << "/" << b << "/" << c << " la ngay khong hop le.";
			else cout << a << "/" << b << "/" << c << " la ngay hop le.";
			break;
		}
		case 4:
		case 6:
		case 11:
		{
			if ((a < 1) || (a > 30))
				cout << a << "/" << b << "/" << c << " la ngay khong hop le.";
			else cout << a << "/" << b << "/" << c << " la ngay hop le.";
			break;
		}
		default:
			cout << "Thang khong hop le.";
			break;
		}

	}
	return (0);
}