
#include <iostream>
#include <iomanip>
using namespace std;
#include <math.h>
double calculate(int n)
{

	if (n > 0)
		return sqrt(n + calculate((n - 1)));
	return 0;
}
	


int main() {
	int n;
	cin >> n;
	cout << fixed << setprecision(2) << calculate(n);
	return 0;
}
