#include <iostream>
#define MAXR 100
#define MAXC 100
using namespace std;

void NhapMaTran(char a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void XuatMaTran(char a[MAXR][MAXC], int &m, int &n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void checkdoc(char  a[MAXR][MAXC], int m, int n, int &i, int j,int &G)
{
	int z = 0;
	int k = 1;
	for (; i + k < m; k++)
	{
		if (a[i + k][j] == '-')
		{
			z++;
		}
		else
		{
			i = i + z;
			break;
		}
	}
	if (z == 0)
		G = 0;

}
void checkphai(char  a[MAXR][MAXC], int m, int n, int &i, int &j,int &R)
{
	for (int u = 1; j + u < n;u++ )
	{
		if (a[i][j + u] == '-')
		{
			checkdoc(a, m, n, i, j + u,R);
		}
		else
		{
			j = j + u - 1;
			break;
		}
		
	}
}
void checktrai(char  a[MAXR][MAXC], int m, int n, int &i, int &j,int &L)
{
	for (int u = 1; j - u >= 0;u++ )
	{
		if (a[i][j - u] == '-')
		{
			checkdoc(a, m, n, i, j + u, L);
		}
		else
		{		
			j = j + u + 1;
			break;
		}
	}
}

int checksao(char a[MAXR][MAXC], int m, int n,int i)
{
	static int dem = 0, sao = 0;
	int R=1, L=1;
	int temp = sao;
	do
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '-')	
			{
				checkdoc (a, m, n, i, j,R);
				
				while (R!=0 && L!=0)
				{
					checkphai(a, m, n, i, j,R);	
				
					checktrai(a, m, n, i, j,L);
				
				}
				sao ++;
			}
		}
	
	i++;
	dem = i;
	}while (sao==temp && i < m);
	if (i < m)
	{
		return (a, m, n, dem);
	}
	return sao;
}


	
int main() {
	int m,n,dem=0;
	char a[100][100];
	
	while (cin >> m >> n) 
	{
		NhapMaTran(a, m, n);
		cout << endl;
		XuatMaTran(a, m, n);
		cout<<checksao(a, m, n, 0);
		
	}
	

}