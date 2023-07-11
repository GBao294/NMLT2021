#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
void nhapchuoi(char *s)
{
	cin.getline(s, 999);
}
int main()
{
	char *s1, *s2;
	s1 = new char[1000];
	s2 = new char[1000];
	nhapchuoi(s1);
	nhapchuoi(s2);
	int n;
	cin >> n;
	if (n >= 0 && n<= strlen(s1))
	{
		int i = 0;
		for (; i < n; i++)
		{
			cout << *(s1 + i);
		}
		cout << s2 << " ";
		for (; i < strlen(s1); i++)
			cout << *(s1 + i);
		return 0;
	}
	else cout << "Vi tri " << n << " khong thoa dieu kien.";

	char s[] = 'taodep';
}
