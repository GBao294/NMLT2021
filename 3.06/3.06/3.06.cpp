#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
	float n,a, b, c,d,e;
	a = 0;
	b = 0;
	c = 0;
	d = 1;
	e = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a += pow(i, i);

		d *= i;
		b += d;

		e += i;
		c += 1 / e;
	
	}	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
