#include "stdafx.h"
#include "Euklides.h"


Euklides::Euklides()
{
}


Euklides::~Euklides()
{
}


int Euklides::EuklidesWhilem(int a, int b)
{
	while (a != b)
	{
		if (a > b)a -= b;
		else b -= a;
	}
	return a;
}

int Euklides::EuklidesWhilemMod(int a, int b)
{
	while (a != b)
	{
		if (a > b) a = a%b;
		else b = b%a;
	}
	return a;
}