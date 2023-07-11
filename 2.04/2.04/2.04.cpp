
#include <iostream>
#include <cmath>


int main()
{
	double a;
	int n;
	std::cin >> a >> n;
	int c;
	c = a*n + 0.5;

	std::cout.precision(10);
	std::cout <<(double) c/n;
}

