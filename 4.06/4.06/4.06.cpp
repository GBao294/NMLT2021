
#include <iostream>

using namespace std;
void input(int &a)
{
	cin >> a;
}
int  TongChuSo(int a)
{
	int  sum, n;
	sum = 0;

	for (; a != 0;)
	{
		n = a % 10;
		sum += n;
		a /= 10;
	}
	return sum;
}
int main() 
{
	int a;
	input(a);
	std::cout << TongChuSo(a);
	return 0;
}