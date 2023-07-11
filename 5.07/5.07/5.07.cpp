#include <iostream>
using namespace std;
int SoNguyenTo(int n)
{
	for (int i = 2; i*i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int reverse(int n)
{
	int r, dx = 0;
	for (; n != 0;)
	{
		r = n % 10;
		dx = dx * 10 + r;
		n /= 10;
	}
	return dx;

}
int main()
{
	int a,b,i;
	int dem = 0;
	cin >> a >> b;
	if (a > 0 && b > 0)
		if (a == 1)
			i = 2;
		else i = a;
	{
		for ( ; i <= b; i++)
		{
			if (SoNguyenTo(i) && (SoNguyenTo(reverse(i))))
			{
			
				dem++;
			}
		}
	}
	cout << dem;
}

