#include <iostream>
using namespace std;
int main()
{
	double a, b,c;
	cin >>a >> b;
    if (a == 0) 
		if (b == 0) 
			cout << "ℝ" << endl;
		else 
			cout << "Ø" << endl;
	else 
		c = (double)- b / a;
		cout<<"{"<<c+1-1<<"}" << endl;
	
}

