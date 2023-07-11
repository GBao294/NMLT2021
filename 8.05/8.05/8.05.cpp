#include <iostream>
#include <string.h>
using namespace std;
void nhapchuoi(char s[])
{
	cin.getline(s, 253);
}
void demtieng(char s[], int dem[], int &k)
{
	int j = strlen(s);
	dem[0] = -1;
	for (int i = 0; i < j; i++)
	{
		if (s[i] == ' ')
		{
			dem[k] = i;
			k++;
		}
	}
	dem[k] = j;
}
bool sosanh(char s[], int dem[], int n, int m)
{
	char temp[100] = {};//hoc
	for (int z = dem[n - 1] + 1, x = 0; z < dem[n]; z++, x++)//dem[0],dem[1]
		temp[x] = s[z];
	char temp2[100] = {};//sinh
	for (int z = dem[m - 1] + 1, y = 0; z < dem[m]; z++, y++)//1,2
		temp2[y] = s[z];
	if (strcmp(temp, temp2) == 0)
		return true;
	return false;
}
int checktruoc(char s[], int dem[], int n)
{
	int t = 0;
	for (int i = n - 1; i > 0; i--)
	{
		if (sosanh(s, dem, n, i) == true)
			return false;
	}
	return true;
}
void demso(char s[], int dem[], int n, int k, int solan[])
{
	int a = 1;
		if (checktruoc(s, dem, n) == 1)
		{
			for (int j = n + 1; j <= k; j++)
			{
				if (sosanh(s, dem, n, j))
				{
					a++;
				}
			}
			solan[n] = a;
		}
		else solan[n] = 0;	
}
void xoadau(char *s)
{
	while (s[0] == ' ')
		memmove(s, s + 1, strlen(s));
}
void xoacuoi(char *s1)
{
	while (s1[strlen(s1)] == ' ')
		s1[strlen(s1)] = '\0';
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
}
int main()
{
	char s[254];
	int dem[100], k = 1, solan[100];
	nhapchuoi(s);
	xoadau(s);
	xoacuoi(s);
	xoagiua(s);
	if (strlen(s) == 0 || s[0] == '\0') 
		cout << "Chuoi rong.";
	else
	{
		demtieng(s, dem, k);
		for (int n = 1; n <= k; n++)
			demso(s, dem, n, k, solan);
		for (int n = 1; n <= k; n++)
			if (solan[n] > 0)
			{
				char temp[100] = {};
				for (int z = dem[n - 1] + 1, x = 0; z < dem[n]; z++, x++)
					temp[x] = s[z];
				if (temp[0] != '\0')
				{
					cout << temp << ": " << solan[n] << endl;
				}
			}
	}
}