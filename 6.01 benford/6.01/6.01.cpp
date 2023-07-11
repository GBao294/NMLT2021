
#include <iostream>
using namespace std;
#define MAX 100
void Nhapmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int laysodau(int n)
{
	do
	{
		n /= 10;
	} while (n >= 10);
	if (n < 10)
		return n;
}

int(isBenford(int a[], int &n))
{
	int so1 = 0;
	int so4 = 0;
	for (int i = 0; i < n; i++)
	{
		if (laysodau(a[i]) == 1)
			so1++;
		if (laysodau(a[i]) == 4)
			so4++;
	}
	if (so1 == 3 && so4 == 1)
		return 1;
	else return 0;
}
int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
