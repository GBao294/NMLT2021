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
bool MTcheo(float a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i][j] != 0)
				return false;
		}
	}
	return true;
}
int main()
{
	float a[MAXR][MAXC];
	int n, m;
	cin >> m >> n;
	NhapMaTran(a, n, m);
	if (MTcheo(a, n, m) == true)
		cout << "Yes";
	else cout << "No";
}
