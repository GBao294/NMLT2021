// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
typedef struct dathuc 
{
	float heso;
	int mu;
};

void Nhapdt(dathuc d[], int thutu)
{
	for (int i = 0; i < thutu; i++)
	{
		fflush(stdin);
		cin>> d[i].heso;
		fflush(stdin);
		cin >> d[i].mu;
	}
}
void xuat(dathuc d[], int thutu)
{
	int i = 0;
	do
	{
		if (d[i].heso == 0)
		{
			i++;
			continue;
		}
		if (d[i].heso!=1)
			cout << d[i].heso;
		if (d[i].mu != 0 && d[i].mu != 1)
			cout << "x^" << d[i].mu;
		else if (d[i].mu == 1)
			cout << "x";
		else if (d[i].heso == 1)
				cout << 1;
			else cout << " ";

		if (i<thutu-1)
			cout << "+";
		i++;
	} while (i < thutu);
	int kt = 1;
	for (int i = 0; i < thutu; i++)
		if (d[i].heso == 0)
			kt = 0;
	if (kt == 0) cout << 0;

}
void tong(dathuc dt[], dathuc dtb[],dathuc X[],int a,int b)
{
	int temp = 0;
	int max, min;
	max = dt[0].mu;
	if (dt[0].mu < dtb[0].mu) max = dtb[0].mu;
	min = dt[a - 1].mu;
	if (dt[a - 1].mu > dtb[b - 1].mu) min = dtb[b - 1].mu;
	int i = 0;
	for (int j = max; j >= min;j-- )
	{
		X[i].heso = 0;
		X[i].mu = 0;
		int kt = 1, x = 0,y=0 ;
		for (; x < a; x++)
		{
			if (dt[x].mu == j)
			{
				X[i].mu = j;
				X[i].heso += dt[x].heso;
			}
		}
		for (; y < b; y++)
		{
			if (dtb[y].mu == j)
			{
				X[i].mu = j;
				X[i].heso += dtb[y].heso;
			}
		}
		if (X[i].mu == j) i++;
	}
}
int main()
{
	dathuc dt[100], dtb[100],X[100];
	int a,b;
	cin >> a;
	Nhapdt(dt, a);
	cin >> b;
	Nhapdt(dtb, b);

	cout << "Da thuc A:";
	xuat(dt, a);
	cout << endl;

	cout << "Da thuc B:";
	xuat(dtb, b);
	cout << endl;

	if (a >= b)
	{
		tong(dt, dtb, X, a, b);
		cout << "A+B = ";
		xuat(X, a);
	}
	else {
		tong(dtb, dt, X, b, a);
		cout << "A+B = ";
		xuat(X, b);
	}
}

