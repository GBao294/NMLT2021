

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,n, uoc;
	i = 1;
	uoc = 0;
	cin >> n;
	if (n > 1)
	{
		for (; i <= n; i++)
		{
			if (n%i == 0)
			{
				uoc++;
			}
		}
		if (uoc <= 2)
			cout << 0;
		else
			cout << 1;
	}
	else
		cout << -1;
	
}

