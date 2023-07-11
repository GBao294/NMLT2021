#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;

if (x <= 30 && x >= 1)
cout << Fibo(x) << endl;
else
cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	return 0;
}
int Fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fibo(n - 1) + Fibo(n - 2);
}