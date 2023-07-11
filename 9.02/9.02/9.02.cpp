
#include <iostream>
using namespace std;
void Nhapmang(int *&a, int &n)
{
	for (int i = 0; i < n; i++)
		cin >> *(a + i);
}
void max(int *&a, int &n)
{
	int max = *a;
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	int u = 0;
	for (int j = 0; j < n; j++)
		if (max == a[j])
			u++;
	cout <<max<<endl<< u;
}
int main()
{
	int  n;
	cin >> n;
	int *a = new int[n];
	Nhapmang(a, n);
	max(a, n);
	delete[]a;
}
