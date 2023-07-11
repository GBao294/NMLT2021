

#include <iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void sapxep(int a[], int &n)
{
	int i = 0;
	while (i < n - 1)
	{
		int vtmin = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[vtmin])
				vtmin = j;
		swap(a[i], a[vtmin]);
		i++;
	}
}

int main()
{
	int a[100], n,k=1;
	cin >> n;
	nhapmang(a, n);
	sapxep(a, n); 
	int i = n-1;
	for (; i>=0; i--)
	{
		if (a[i-1] < a[i])	
			break;	
	}
	for (int j = 1; j < n; j++)
		if (a[0] < a[j])
	{ 
			k = 0;
			break;
	}
	if (k == 0)
		cout << a[i - 1];
	else cout << 0;
	return 0;



}

