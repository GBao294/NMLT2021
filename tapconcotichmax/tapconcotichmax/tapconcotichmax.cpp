// tapconcotichmax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void rutgon(int a[],int &n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] == a[j])
			{
				a[j] = 0;
			}
}
void xuatmang(int A[], int &N)
{
	for (int i = 0; i < N; i++)
		if(A[i]>0)
			cout << A[i] << " ";
}
int main()
{
	int *a, *b, n;
	cin >> n;
	a = new int[n];
	b = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	rutgon(a, n);
	xuatmang(a, n);


}
