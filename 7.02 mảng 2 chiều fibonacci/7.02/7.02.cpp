#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int Fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fibo(n - 1) + Fibo(n - 2);
}
void Nhapmang(int a[][MAX], int &n)
{
	cin >> n; 
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Fibo(i + j + 1);
}
void Xuatmang(int a[][MAX], int n)
{
	for (int i = 0; i < n; i++)

	{
		for (int j = 0; j < n - 1; j++)
			cout << a[i][j] << " ";
		cout << a[i][n - 1] << endl;
	}
}

int main()
{
	int n, a[MAX][MAX];
	Nhapmang(a, n);
	Xuatmang(a, n);
}