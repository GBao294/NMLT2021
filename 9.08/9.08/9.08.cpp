#include <iostream>
using namespace std;
void NhapMaTran(float **&a, int &m, int &n)
{
	cin >> m >> n;
	a = new float*[100];
	for (int i = 0; i < m; i++)
		a[i] = new float[100];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void timmax(float **&a, int &m, int &n)
{
	float max;
	for (int j = 0; j < n; j++)
	{
		max = a[0][j];
		for (int i = 1; i < m; i++)
		{
			if (max < a[i][j])
				max = a[i][j];
		}
		cout << "Gia tri lon nhat tren cot " << j << " la: " << max << endl;
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
	timmax(a, m, n);

}