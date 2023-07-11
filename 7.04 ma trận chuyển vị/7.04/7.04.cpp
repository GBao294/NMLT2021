#include <iostream>
#define MAXR 100
#define MAXC 100
using namespace std;
void NhapMaTran(float a[MAXR][MAXC], int &m, int &n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void chuyenvi(float a[MAXR][MAXC], float b[MAXR][MAXC], int &n, int &m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			b[i][j] = a[j][i];
			
}

int main()
{
	float a[MAXR][MAXC], b[MAXR][MAXC];
	int n, m;
	NhapMaTran(a, m, n);
	chuyenvi(a,b, n, m);
	xuatmang(b, n, m);
}
