#include<iostream>

using namespace std;

double faktoriyel(double n);
double ust(double x, double y);
double radyan(double q);

int main()
{
	double x, sonuc;
	sonuc = 0;
	cout << "x= ";
	cin >> x;
	x =radyan(x);
	for (double k = 0.0; k < 100.0; k++)
	{
		sonuc += (ust(-1, k) / faktoriyel((2 * k + 1))) * ust(x, (2*k + 1));
	}
	cout << endl<<"Sonuc= "<<sonuc;
}

double faktoriyel(double n)
{
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result = result* i;
	}
	return result;
}
double ust(double x,double y)
{
	double sonuc = 1;
		for (double a = 0; a < y; a++)
		{
			sonuc *= x;
		}
		return sonuc;
}
double radyan(double q)
{
	double sonuc = 0;
	q = q * 3.14159265 / 180.0;
	sonuc = q;
	return sonuc;
}