#include <iostream>
#include <string.h>

using namespace std;
void nhapchuoi(char s[])
{
	cin.getline(s, 253);
}
void daonguoctieng(char s[])
{
	int j = strlen(s) - 1;
	for (int i = (strlen(s) - 1); i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			for (int pos = i + 1; pos <= j; pos++)
			{cout << s[pos];
			}
		j = i - 1;
		cout << " ";
		}
		if (i == 0)
		{
			for (int pos = i; pos <= j; pos++)
				cout << s[pos];
		}
	}
}
int main()
{
	char s1[254];
	nhapchuoi(s1);
	if (strlen(s1) == 0)
		cout << "Chuoi rong.";
	else daonguoctieng(s1);

}	
	