#include "Car.h"

char** Car::shape() {
	//Row1
	a[0][0] = ' ';
	a[0][1] = char(218);
	a[0][2] = char(194);
	a[0][3] = char(191);
	a[0][4] = ' ';
	//Row2
	a[1][0] = char(219);
	a[1][1] = char(219);
	a[1][2] = char(219);
	a[1][3] = char(219);
	a[1][4] = char(219);
	//Row3
	a[2][0] = ' ';
	a[2][1] = char(223);
	a[2][2] = ' ';
	a[2][3] = char(223);
	a[2][4] = ' ';
}

Car::Car()
{
	a = new char* [3];
	for (int i = 0; i < 3; i++)
	{
		a[i] = new char[5];
	}
}

Car::~Car()
{
	for (int i = 0; i < 3; i++)
		delete a[i];
	delete[] a;
}

void  Car::sound() {}

void Car::drawC()
{
	int p = 0, q = 0;
	for (int i = getX(); i < i + 3; i++)
	{
		for (int j = getY(); j < j + 5; j++)
		{
			gotoxy(j, i);
			cout << a[p][q];
			++q;
		}
		p++;
	}
}

void Car::drawtobuffer(Buffer& b)
{
	int p = 0, q = 0;
	for (int i = getX(); i < i + 3; i++)
	{
		for (int j = getY(); j < j + 5; j++)
		{
			curFrame[i][j] = a[p][q];
			++q;
		}
		p++;
	}
}