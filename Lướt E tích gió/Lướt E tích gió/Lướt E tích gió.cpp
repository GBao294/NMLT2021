#include <iostream>
using namespace std;
int main()
{
	int t,n, m, ry, cy, rd, cd,k[10000];
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n >> m >> ry >> cy >> rd >> cd;
		if (n >= 1 && n <= 100 && m >= 1 && m <= 100 && rd >= 1 && ry >= 1 && cy >= 1 && cd >= 1)
		{
			int dr = 1, dc = 1, count = 0;
			while (ry != rd && cy != cd)
			{
				if (ry == n) dr = -1;
				ry += dr;
				if (ry == n) dr = -1;

				if (cy == m) dc = -1;
				cy += dc;
				if (cy == m) dc = -1;
				count++;
			}
			k[i] = count;
		}
	}
	for (int i = 1; i <= t; i++)
		cout << k[i] << endl;
}