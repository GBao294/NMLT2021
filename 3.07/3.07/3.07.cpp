
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, n,sum;
	sum = 0;
	cin >> a >> b >> n;
	if(1<=a&&a<=2000&&1<=b&&b<=2000&&0<=n&&n<=5)
	for (int i = 1; i <= n; i++)
	{
		sum += (a++)*(b++);
	
	}
	cout << sum;
}

