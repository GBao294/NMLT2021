#include <iostream>
using namespace std;
int reverse(int n)
{
	static int kqTam = 0;

	if (n < 10)
	{
		if (kqTam==0)
		return n;
		return kqTam*10+n;
	}
	kqTam = kqTam * 10 + n % 10;
	return reverse(n / 10);
}
int main()
{
	int n;
	cin >> n;
	cout << reverse(n);
}
