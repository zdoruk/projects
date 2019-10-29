#include<iostream>
using namespace std;

int asal(int x);
int polindrom(int x);

int main()
{
	int deger;
	cout << "Bir Sayi Giriniz:: ";
	cin >> deger;
	int sayac = 0;
	int asalkontrol;
	int polindromkontrol;
	for (int n=2; n<(n+1) ;n++)
	{
		polindromkontrol = n;
		asalkontrol = n;
		n = asal(n);
		if (n == asalkontrol)
		{
			n=polindrom(n);
			if (n == polindromkontrol)
			{
				cout << endl << n;
				sayac++;
				if (sayac == deger)
				{
					break;
				}
			}
			else if (n == 0)
			{
				n = polindromkontrol;
			}
		}
		else if (n==0)
		{
			n = asalkontrol;
		}
	}
}


int asal(int x)
{
	int a=0;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			a++;
			break;
		}
	}
	if (a == 0)
	{
		return x;
	}
	else
	{
		return 0;
	}
}


int polindrom(int x)
{
	int  kontrol,b,c=0;
	kontrol = x;
	while (x>0)
	{
		b = x % 10;
		x = x / 10;
		c = c * 10 + b;
	}
	if (kontrol==c)
	{
		return kontrol;
	}
	else
	{
		return 0;
	}
}
