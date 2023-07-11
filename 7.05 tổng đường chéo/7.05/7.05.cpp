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
int tinh(float a[MAXR][MAXC], int &m, int &n, double &s)
{
	for (int i = 0; i < m; i++)
	{
		s = s + a[i][i];
	}
	return s;
}
int main()
{
	float a[MAXR][MAXC];
	int n, m;
	double s = 0;
	cin >> n >> m;
	if (n == m)
	{
		NhapMaTran(a, n, m);
		tinh(a, n, m, s);
		cout << s;
	}

}