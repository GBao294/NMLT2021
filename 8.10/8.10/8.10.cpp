#include <iostream>
#include <string.h>

using namespace std;
void nhapchuoi(char *s)
{
	cin.getline(s, 253);
}
int main()
{
	char *s1, *s2;
	s1 = new char[254];
	s2 = new char[254];
	nhapchuoi(s1);
	nhapchuoi(s2);
	if (strlen(s1)+strlen(s2)<254)
		cout << s1 << s2;
	else cout << "Khong noi duoc. Khong du bo nho.";
}