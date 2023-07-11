#include <iostream>
using namespace std;


int main()
{
	int temperature;
	cout << "What is the outdoor temperature? ";
	cin >> temperature;
	cout << endl;
	cout << "What is your plan today?" << endl;

	if (temperature >= 33) cout << "Good day for swimming" << endl;
	if (temperature >= 24 && temperature <33) cout << "Good day for golfing" << endl;
	if (temperature <24 &&  temperature >= 10) cout << "Good day to play tennis" << endl;
	if (temperature < 10) cout << "Go to bed" << endl;
}
