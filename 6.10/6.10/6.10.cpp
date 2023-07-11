// 6.10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void nhapmang(int A[], int &N)
{
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
}

int main()
{
	int a[100], n, b[100], m, c[200];
	cin >> n;
	nhapmang(a, n);
	cin >> m;
	nhapmang(b, m);
	int k = 0;
	int i = 0, j = 0;
	do
	{
		if (a[i] > b[j])
		{
			c[k] = b[j];
			if (j == m)
			{
				c[k] = a[i];
				i++;
			}
				
			else if (j < m)
				j++;
		}
		else
		{
			c[k] = a[i];
			if (i == n )
			{
				c[k] = b[j];
				j++;
			}
			else if (i < n)
				i++;
		}
		cout << c[k] << " ";
		k++;
		
	} while (k < (m + n));

	
}
		

