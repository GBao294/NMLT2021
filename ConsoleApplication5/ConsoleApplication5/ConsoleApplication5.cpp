// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
typedef struct SinhVien
{
	char ho[50];
	char ten[50];
	char mssv[10];
	char lop[5];
}SV;
void NhapSinhVien(SV dssv[], int thutu)
{
	for (int i = 0; i < thutu; i++)
	{
		fflush(stdin);
		cout << "Nhap ho sinh vien : ";
		cin.getline(dssv[i].ho, 49);
		fflush(stdin);
		cout << "Nhap ten sinh vien : ";
		cin.getline(dssv[i].ten, 49);
		fflush(stdin);
		cout << "Nhap ma so sinh vien : ";
		cin.getline(dssv[i].mssv, 9);
		fflush(stdin);
		cout << "Nhap lop cua sinh vien : ";
		cin.getline(dssv[i].lop, 4);
	}
}
void sapxep(SV dssv[], int n) // thutu = n
{		
	int i = 0;
		while (i < n - 1)
		{
			int vtmin = i;
			for (int j = i + 1; j < n; j++)
				if (dssv[j].ho[0] < dssv[vtmin].ho[0])
					vtmin = j;
			swap(dssv[i], dssv[vtmin]);
			i++;
		}
}
void xepten(SV dssv[], int n)
{
	for (int i = 0; i < n;i++ )
	{
		if (dssv[i].ho[0] == dssv[i + 1].ho[0])
		{
			if (dssv[i].ten[0] > dssv[i+1].ten[0])
				swap(dssv[i], dssv[i + 1]);
		}
		i++;
	}
}
int main()
{
	SinhVien SV[100];
	NhapSinhVien(SV, 3);
	sapxep(SV, 3);
	xepten(SV, 3);
	cout << SV[0].ten;
}

	