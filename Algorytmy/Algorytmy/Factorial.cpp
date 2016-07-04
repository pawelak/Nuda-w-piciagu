#include "stdafx.h"
#include "factorial.h"


Factorial::Factorial()
{
}


Factorial::~Factorial()
{
}

long long unsigned int Factorial::factorialR(int n)		//zwykle na rekuencji 
{
	if (n == 0) return 1;
	else return n*factorialR(n - 1);
}


long long unsigned int Factorial::factorialIter(int a)
{
	long long unsigned int result=1;
	if (a == 0)return 1;
	while (a > 0)
		result *= a--;

	return result;
}

long long unsigned int Factorial::factorialIterFor(int a)
{
	long long unsigned int result = 1;
	if (a == 0)return 1;
	for (int  i = 1; i < a+1; i++)
	{
		result *= i;
	}
	return result;
}



