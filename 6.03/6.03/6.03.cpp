

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
		int a[100], n;
		cin >> n;
		nhapmang(a, n);
		for (int i = 1; i < n; i+=2)
				cout << a[i] << " ";
		return 0;
}
