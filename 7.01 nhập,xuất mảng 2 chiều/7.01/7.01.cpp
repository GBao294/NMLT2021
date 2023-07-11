// 7.01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 100
using namespace std;
void nhapmang(float a[][MAX], int &m, int &n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void xuatmang(float a[][MAX], int &m, int &n)
{
	for (int i = 0; i < m; i++)

	{
		for (int j = 0; j < n - 1; j++)
			cout << a[i][j] << " ";
		cout << a[i][n - 1] << endl;
	}

}
int main()
{
	float a[100][100];
	int n,m;
	nhapmang(a,m,n);
	xuatmang(a,m,n);
}


