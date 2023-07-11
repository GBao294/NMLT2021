#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, x;
	float sum1,sum2,sum3,d;
	sum1 = 1;
	sum2 = 1;
	sum3 = 1;
	d = 1;
	cin >> n >> x;
	if (n >= 0 && x >= 0)
	{
		for (int i = 1; i <= n; i++)
		{
			sum1 += pow(x, i);
			sum2 += pow(x, 2 * i);

			d *= i;
			sum3 += pow(x, i) / d;
		}
	}
		cout << sum1 << endl;
		cout << sum2 << endl;
		cout << sum3 << endl;

}

