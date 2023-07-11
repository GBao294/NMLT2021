
#include <iostream>
#include <cmath>
using namespace std;
bool SoNguyenTo(int n) 
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) 
		{
			return false;
		}
	}
		
	return true;
}
int so_be(int m, int n) 
{
	if (n < m) 
		return n;
	return m;
}

int sum_common_prime(int m,int n)
{
	int s = 0;
	for (int i = 2; i <= so_be(m, n); i++)
	{
		if (m%i == 0 && n%i == 0)
		{
			if (SoNguyenTo(i))
				s += i;
		}
	}
	if (s == 0)
		return -1;
	return s;
}
int main() 
{
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
