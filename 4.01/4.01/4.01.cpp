	
	#include <iostream>
	using namespace std;
	long long GTK(int n)
		{ 

		int s = 1;
		for (; n > 0; )
		{
			s *= n;
			n -= 2;
		}
		return s;
	}
	int main()
	{
		int n;
		cin >> n;
		if (n>=1)
		cout << GTK(n);
		return 0;
	}

