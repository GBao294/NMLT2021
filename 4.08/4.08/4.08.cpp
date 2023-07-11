
#include <iostream>
using namespace std;
void input(int &n)
{
	cin >> n;

}
int input()
{
	int n;
	cin >> n;
	return n;
}
int TongUocChung(int a, int b)
{
	int s = 0;
	for (int i = 1; (i <= a || i <= b); i++)
		if (a%i == 0 && b%i == 0)
			s += i;
	return s;
}

int main() 
{
	int a, b;
	a= input();
	input(b);
	
	std::cout << TongUocChung(a, b);
	return 0;
}
