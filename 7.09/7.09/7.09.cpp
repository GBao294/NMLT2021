
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
void tinh(float a[MAXR][MAXC], float b[MAXR][MAXC], int &m, int &n)
{
	{
		for (int i = 0; i < m; i++)

		{
			for (int j = 0; j < n - 1; j++)
				cout << a[i][j]+b[i][j] << " ";
			cout << a[i][n - 1] + b[i][n-1] << endl;
		}

	}
}
int main()
{
		float a[MAXR][MAXC], b[MAXR][MAXC];
		int n, m;
		NhapMaTran(a, m, n);
		NhapMaTran(b, m, n);
		tinh(a, b, m, n);

}

