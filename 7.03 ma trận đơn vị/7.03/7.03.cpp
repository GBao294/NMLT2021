// 7.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAXR 100
#define MAXC 100
using namespace std;
void NhapMaTran(int a[MAXR][MAXC], int &n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
bool isMaTranDonVi(int a[MAXR][MAXC], int &n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if ((i == j) && a[i][j] != 1 || i != j && a[i][j] != 0)
				return false;
	return true;
}
int main() 
{
	int a[MAXR][MAXC], n;
	NhapMaTran(a, n);
	std::cout << std::boolalpha << isMaTranDonVi(a, n);
	return 0;
}
