#include <iostream>
using namespace std;
void NhapMaTran(float **&a, int &m, int &n)
{
	cin >> m >> n;
	a = new float*[m];
	for (int i = 0; i < m; i++)
		a[i] = new float[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void Xuat(float **&a, int &m, int &n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}
int main()
{
	float **a = NULL;
	int n, m;
	NhapMaTran(a, m, n);
	Xuat(a, m, n);

}
