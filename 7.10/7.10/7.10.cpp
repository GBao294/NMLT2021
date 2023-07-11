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
void NhapMaTranb(float a[MAXR][MAXC], int &n, int &k)
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			cin >> a[i][j];
}

int main()
{
	float a[MAXR][MAXC], b[MAXR][MAXC], c[MAXR][MAXC] ;
		int n, m,k;
		NhapMaTran(a, m, n);
		NhapMaTranb(b, n, k);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < k; j++)
			{
				c[i][j] = 0;
				for (int x = 0; x < n; x++)
					c[i][j] += a[i][x] * b[x][j];
			}
		}
		
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < k - 1; j++)
				cout << c[i][j] << " ";
			cout << c[i][k - 1] << endl;
		}


}



