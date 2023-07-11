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
	int k = 0;
	for (int i = 0; i <= j; i++)
	{
		if (s[i] == ' ')
		{
			int dem = 0;
			for (int pos = i-1; pos >= k; pos--)
			{
				cout << s[pos];
				dem++;
			}
			cout << " ";
			dem++;
			k += dem;
		}
		if (i == j)
			for (int pos = j; pos >= k; pos--)
				cout << s[pos];
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