// 2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void main()
{
	int a;
	char b;
	cin >> a >> b;
	if (a >= 21)
		switch (b)
		{
		case 'm': cout << 1;
			break;
		case 'M': cout << 1;
			break;
		case 'f': cout << 2;
			break;
		case 'F': cout << 2;
			break;
		default: cout << "I do not know why";
		}
	else
		switch (b)
		{
		case 'm': cout << 3;
			break;
		case 'M': cout << 3;
			break;
		case 'f': cout << 4;
			break;
		case 'F': cout << 4;
			break;
		default: cout << "I do not know why";
		}

		
				

}

