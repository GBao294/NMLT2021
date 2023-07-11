#include <iostream>
using namespace std;
int Input()
{
	int n;
	cin >> n;
	return n;
}
int sum_even_divisor(int a)
{
	int s = 0;
for (int i=2;i<=a;i+=2)
	if (a%i == 0)
	s += i;
if (s == 0)
return -1;
return s;

}


int main()
{
	int n;
	n = Input();
	cout<<sum_even_divisor(n);
	return 0;
}