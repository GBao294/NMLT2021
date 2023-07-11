#include <iostream>
#include <string.h>

using namespace std;
void nhapchuoi(char *s)
{
	cin.getline(s, 253);
}
int main()
{
	char *s1, *s2;
	int kt = 1;
	s1 = new char[254];
	nhapchuoi(s1);
	for (int i = 0; i < strlen(s1); i++)
		if (s1[i] >= 48 && s1[i] <= 57)
		{
			kt = 0;
			break;
		}
	if (kt == 0)
		cout << "CHUOI KHONG HOP LE.";
	else cout << s1;
	
}