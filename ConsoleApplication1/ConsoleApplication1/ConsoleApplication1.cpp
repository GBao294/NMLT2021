#include <iostream>
#define MAXR 100
#define MAXC 100
using namespace std;

void NhapMaTran(float a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
bool tgduoi(float a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i][j] != 0)
				return false;
	return true;
}
bool checkFro(float a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0, u = 0; j <= i; j++)
		{
			if (a[i][j] != 0)
				u++;
			if (u == 2)
			{
				return false;
				break;
			}
		}
	}
	return true;
}
void XoaKhoangTrang(char s[])
{
	char* p = strstr(s, "  ");
	if (p != NULL) memmove(p, p + 1, strlen(p));
	else return;
	return XoaKhoangTrang(s);
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
int main()
{
	float a[MAXR][MAXC];
	int n, m;
	cin >> n >> m;
	NhapMaTran(a, n, m);
	if (tgduoi(a, n, m))
		if (checkFro) cout << "Yes";
		else cout << "No";

}