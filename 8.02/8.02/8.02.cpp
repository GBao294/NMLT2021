#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void nhapchuoi(char *s)
{
	cin.getline(s, 999);
}

void xoadau(char *s1)
{
	while (s1[0] == ' ')
	{
		for (int i = 0; i < strlen(s1); ++i)
			s1[i] = s1[i + 1];
	}
}
void xoacuoi(char *s1)
{
	while (s1[strlen(s1 - 1)] == ' ')
		s1[strlen(s1) - 1] = '\0';
}
void xoagiua(char *s1)
{
	for (int i = 0; i < strlen(s1);)
	{
		if (s1[i] == ' ' && s1[i + 1] == ' ')
		{
			for (int j = i + 1; j < strlen(s1); j++)
				s1[j] = s1[j + 1];
		}
		else i++;
	}
	for (int i = 0; i < strlen(s1);)
	{
		if (s1[i] == ' ' && s1[i + 1] == '.')
		{
			for (int j = i; j < strlen(s1); j++)
				s1[j] = s1[j + 1];
		}
		else i++;
	}
}
int main()
{
	char *s1;
	s1 = new char[1000];
	nhapchuoi(s1);
	cout << s1 << endl;
	xoadau(s1);
	xoacuoi(s1);
	xoagiua(s1);
	for (int i = 0; i < strlen(s1); i++)
	{
		cout << s1[i];
		if (s1[i] == '.' && s1[i + 1] == '.'|| s1[i] == '.' && s1[i + 1] != ' ')
			cout << ' ';
	}
	cout << ' ';
	delete(s1);
}
