#include <iostream>
#include <stdio.h>
#include <string.h>
#include<ctype.h>
using namespace std;
void nhapchuoi(char *s)
{
	cin.getline(s, 999);
}
void DoiHoaThuong(char *s1)
{
	s1[0] = toupper(s1[0]);
	for (int i = 1; i < strlen(s1); i++)
		if (s1[i] == ' ')
		{
			s1[i + 1] = toupper(s1[i + 1]);
			i++;
		}
		else
		{
			s1[i] = tolower(s1[i]);
		}
	cout << s1;
}
void xoadau(char *s1)
{
		while (s1[0] == ' ')
		{
			for (int i = 0; i < strlen(s1); ++i)
				s1[i] = s1[i + 1];
		}
		//while (s1[0] == ' ')
	//memmove(s,s+1,strlen(s));
}
void xoacuoi(char *s1)
{
	while (s1[strlen(s1-1)] == ' ')
		s1[strlen(s1)-1] = '\0';
}
void xoagiua(char *s1)
{
	for (int i = 0; i < strlen(s1);)
	{
		if (s1[i] == ' ' && s1[i + 1] == ' ')
		{
			for (int j=i+1; j < strlen(s1); j++)
				s1[j] = s1[j + 1];
		}
		else i++;
	}
	// char *p=strstr(s,"  ");
	// while(p!=NULL)
	//{
	//memove(p,p+1,strlen(p));
	// p=strstr(s," ");}
}
int main()
{
	char *s1;
	s1 = new char[1000];
	nhapchuoi(s1);
	xoadau(s1);
	xoacuoi(s1);
	xoagiua(s1);
	DoiHoaThuong(s1);
	delete(s1);
}