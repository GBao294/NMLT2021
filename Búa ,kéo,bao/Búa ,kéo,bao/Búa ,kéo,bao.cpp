#include <iostream>
#include <math.h>
using namespace std;
int max1(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}
int min1(int a, int b)
{
	int min = a;
	if (b < min) min = b;
	return min;
}
int main()
{
	int n, a, b, c, x, y, z, g, h, temp;
	cin >> n;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	int min, max;
	if (a >= 0 && b >= 0 && c >= 0 && x >= 0 && y >= 0 && z >= 0)
	{
		max = min1(a, y) + min1(b, z) + min1(c, x);
		int H[2][3] = { a,b,c,x,y,z };
		if (x + y + z == n && a + b + c == n && n > 0)
		{
			while (1)
			{


				if (H[1][0] == 0 && H[0][0] != 0) h = 0;
				else
				{
					if (H[1][1] == 0 && H[0][1] != 0) h = 1;
					else
					{
						if (H[1][2] == 0 && H[0][2] != 0) h = 2;
						else
						{
							g = max1(H[0][0], H[0][1], H[0][2]);
							if (g == H[0][0]) h = 0;
							if (g == H[0][1]) h = 1;
							if (g == H[0][2]) h = 2;
						}
					}
				}

				H[0][h] -= H[1][h];
				if (H[0][h] <= 0) { H[1][h] = -H[0][h]; H[0][h] = 0; }
				else
				{
					H[1][h] = 0;
					{
						if (h >= 1)
						{
							H[0][h] -= H[1][h - 1];
							if (H[0][h] <= 0) { H[1][h - 1] = -H[0][h]; H[0][h] = 0; }
							else { H[1][h - 1] = 0; }
						}
						else {
							H[0][h] -= H[1][2];
							if (H[0][h] <= 0) { H[1][2] = -H[0][h]; H[0][h] = 0; }
							else { H[1][2] = 0; }
						}
					}
				}
				if (H[1][0] == 0 && H[1][1] == 0 || H[1][0] == 0 && H[1][2] == 0 || H[1][1] == 0 && H[1][2] == 0
					|| H[0][0] == 0 && H[0][1] == 0 || H[0][0] == 0 && H[0][2] == 0 || H[0][1] == 0 && H[0][2] == 0)
					break;

			}
		}
		if (H[1][0] == 0 && H[1][1] == 0) min = H[0][1];
		if (H[1][0] == 0 && H[1][2] == 0) min = H[0][0];
		if (H[1][1] == 0 && H[1][2] == 0) min = H[0][2];
		if (H[0][0] == 0 && H[0][1] == 0) min = H[1][0];
		if (H[0][0] == 0 && H[0][2] == 0) min = H[1][2];
		if (H[0][1] == 0 && H[0][2] == 0) min = H[1][1];
		cout << min << " " << max;
	}

}