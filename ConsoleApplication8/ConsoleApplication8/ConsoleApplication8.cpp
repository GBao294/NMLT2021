#include <iostream>
#include <string.h>
#define N 300 
using namespace std;

void C(char s[])
{
	char* p = strstr(s, "  ");
	if (p != NULL) memmove(p, p + 1, strlen(p));
	else return;
	return C(s);
}

int main()
{
	char s[N];
	cin.getline(s, N);
	C(s);
	for (int i = 0; i <= strlen(s); i++)
	{
		if ((s[i] == ' ') && (s[i + 1] == '.'))
			memmove(s + i, s + i + 1, strlen(s));
		if ((s[i] == '.') && (s[i + 1] != ' '))
		{
			for (int j = strlen(s); j > i; j--)
			{
				s[j + 1] = s[j];
			}
			s[i + 1] = ' ';
		}
	}
	cout << s;

}