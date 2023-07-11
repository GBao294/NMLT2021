#include <iostream>
#include <string.h>

using namespace std;
void nhapchuoi(char s[])
{
	cin.getline(s, 253);
}
int main()
{
	int a;
	char s1[254], s2[254];
	nhapchuoi(s1);
	nhapchuoi(s2);
	if (strlen(s1) <= 254 && strlen(s2) <= 254)
	{
		a = strcmp(s1, s2);
		if (a == 0)
			cout << a;
		if (a > 0)
			cout << 1;
		if (a < 0)
			cout << -1;
	}

}