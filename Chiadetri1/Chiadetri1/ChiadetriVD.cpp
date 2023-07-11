#include <iostream>
#include <algorithm>
using namespace std;
int find(int a[], int n, int k,int mid)
{
	if (k == mid) return a[mid];
	else if (k > mid) return find(a, n, k, mid + 1);
	else return find(a, n, k, mid - 1);
}
double FastPower(int a, int n)
{
	if (n == 0)
		return 1;
	else
		if (n % 2 == 1)
			return a * FastPower(a, n - 1);
		else
			return FastPower(a, n / 2)
			*FastPower(a, n / 2);
}
int main()
{
	int n, k, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	cout << find(a, n, k, n / 2);
	int x;
	cin >> x >> n;
	FastPower(x, n);
	return 0;
}


