#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void main()
{
	char ch;
	cout << "Nhap gia tri ch=";
	cin >> ch;
	switch (ch)
	{
	case 'a': cout << "Ki tu a da duoc nhap";
		
	case 'b': cout << "Ki tu b da duoc nhap";
		break;
	default: cout << "Ki tu khac a va b da duoc nhap";
	}
}