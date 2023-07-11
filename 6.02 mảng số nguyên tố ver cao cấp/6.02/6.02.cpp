#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100


int SoNguyenTo(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}return 1;
}
void NhapmangSNT(int A[], int &n)
{
	cin >> n;
	int dem = 0, i = 2, j = 0;
	while (dem < n)
	{
		if (SoNguyenTo(i))
		{
			A[j] = i;
			j++;
			dem++;
		}
		i++;
	}
}
int SoPhanTuChuaY(int a[], int n, int y)
{
	static int dem1 = 0;
	for (int z = 0; z < n; z++)
	{
		while (a[z] != 0)
		{
			if ((a[z] % 10) == y)
			{
				dem1++;
				break;
			}
			a[z] /= 10;
		}
	}
	return dem1;
}

int main()
{
	int a[MAX], n, y;
	cin >> y;
	NhapmangSNT(a, n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}