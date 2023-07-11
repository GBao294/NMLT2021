


#include <iostream>
#include <iomanip>
	using namespace std;

	int main()
{
		long double n,x, s, eps, luythua, gt;
		cin >> n;
		int dau = -1;
		if (n >= 0)
			x = n;
		else x = -n;
		s = eps = luythua = x;
		gt = 1;
		
		{
			int i = 3;
			do
			{
				eps = (luythua *= x * x) / (gt *= i * (i - 1));
				cout << eps << endl;	
				s += dau * eps;
				
				i += 2, dau = -dau;
				
			} while (eps > 0.00001);
		}
			

	

}