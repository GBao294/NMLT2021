
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
#define M 200

void Add(char *p, char *p1, int& k)
{
	cin >> k;
	if (k>=0 && k <= strlen(p)) 
	{
		char* p_1 = p + k;
		strcat(p1, p_1);
		p[k] = '\0';
		strcat(p, p1);
		cout << p;
	}
	else cout << "Vi tri " << k << " khong thoa dieu kien.";
}

int main()
{
	char s[M], s1[M];
	cin.getline(s, M-1);
	cin.getline(s1, M-1);
	int k;
	Add(s, s1, k);

}
