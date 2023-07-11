#include <iostream>
using namespace std;

int main() 
{
	int i = 1,l, j,z, n, kt, kt2;
	l = 0;
	cin >> n;
	if (n < 1000)
	{
		while (i <= n)
		{
			kt = 1;
			if (i != 0 && i != 1)
			{
				j = 2;
				while (j <= i / 2)
				{
					if (i%j == 0)
					{
						kt = 0;
						break;
					}
					j++;
				}
			}
			else
			{
				kt = 0;
			}
			kt2 = 1;
			if ((i - 2) != 0 && (i - 2) != 1)
			{
				z = 2;
				while (z <= (i - 2) / 2)
				{
					if ((i - 2) % z == 0)
					{
						kt2 = 0;
						break;
					}
					z++;
				}
			}
			else
			{
				kt = 0;
			}
			if (kt == 1 && kt2 == 1)
			{
				cout << i - 2 << ", " << i << endl;
				l++;
			}

			i++;
		}
	}
	cout << "Tong: " << l << " cap so sinh doi < " << n;
	}