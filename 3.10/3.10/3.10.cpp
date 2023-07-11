#include <iostream>
using namespace std;
int so_lon(int m, int n) 
{
	if (n > m) m = n;
	return m;
}
int nhap_so_duong() 
{
	int n;
	do {
		cout << "Nhap mot so nguyen duong";
		cin >> n;
	} while (n <= 0);
	return n;
}
int main()
{
	cout << "so lon nhat trong 04 so la "
		<< so_lon(
			so_lon(nhap_so_duong(), nhap_so_duong())
			, so_lon(nhap_so_duong(), nhap_so_duong())
		);
}