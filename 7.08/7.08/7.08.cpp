
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
		for (int j = i+1; j < n; j++)
			if (a[i][j] != 0 )
				return false;
	return true;
}
bool checkduongcheo(float a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < n; i++)
		if (a[0][0] == 1)
			if (a[i][i] != 1)
				return false;
	return true;

}
bool checkFro(float a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0, u = 0; j < i; j++)
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
int main()
{
	float a[MAXR][MAXC];
	int n, m;
	cin >> n >> m;
	if (n == m)
	{
		NhapMaTran(a, n, m);
		if(tgduoi(a,n,m)==true)
			if(checkduongcheo(a,n,m)==true)
				if(checkFro(a,n,m)==true)
				cout << "Yes";
				else cout << "No";
			else cout << "No";
		else cout << "No";
	}
	
}

