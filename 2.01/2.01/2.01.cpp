#include <iostream>
using namespace std;


int main()
{
	int age; cin >> age;
	char gender; cin >> gender;
	
	

	
	if ((age >= 21) && (gender >= 'M' && gender <= 'M' || gender >= 'm' && gender <= 'm')) cout << "1";
	if ((age >= 21) && (gender >= 'F' && gender <= 'F' || gender >= 'f' && gender <= 'f')) cout << "2";
	if ((age <= 20) && (gender >= 'M' && gender <= 'M' || gender >= 'm' && gender <= 'm')) cout << "3";
	if ((age <=20)  && (gender >= 'F' && gender <= 'F' || gender >= 'f' && gender <= 'f')) cout << "4";

	if (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') cout << "I do not know why";
	
		
	
	
      


	

	
}

