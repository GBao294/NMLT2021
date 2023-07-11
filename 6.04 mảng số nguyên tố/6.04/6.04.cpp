

	#include <iostream>
	#include <math.h>
	using namespace std;
	int nhapsoduong()
	{
		int n;
		do {
			cin >> n;
		} while (n <= 0);
		return n;
	}
	void nhapmang(int A[], int &N)
	{
		for (int i = 0; i < N; i++)
		{

			A[i] = nhapsoduong();
		}
	}
	
	int SoNguyenTo(int n)
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}return 1;
	}
	int main()
	{
		int a[100], n, dem=0;
		cin >> n;
		nhapmang(a, n);
		for (int i = 0; i < n; i++)
		{
			if (SoNguyenTo(a[i]) && a[i] >= 2)
				dem = 1;
			
		}
		if (dem == 1)
		{
			for (int i = 0; i < n; i++)
				if (SoNguyenTo(a[i]) && a[i]>=2)
					cout << a[i] << " ";
		}
		else cout << 0;
		return 0;
	}
