#include "stdafx.h"
#include "Fibonacci.h"


Fibonacci::Fibonacci()
{
}


Fibonacci::~Fibonacci()
{
}

long long unsigned int Fibonacci::fibonaciiR(int n)
{
	if (n < 3)
		return 1;
	else
		return fibonaciiR(n - 1) + fibonaciiR(n - 2);
	return 0;
}

long long unsigned int Fibonacci::fibonaciiFor(int n)
{
	int tmp, l1 = 0, l2 = 1;
	for (int i = 2; i < n; i++)
	{
		tmp = l1 + l2;
		l1 = l2;
		l2 = l1;
	}
	return l2;
}

long long unsigned int Fibonacci::fibonaciiMoj(int n)		//hahaha moje dzia³a szybciej ;d zanajomoœæ assemblera sie na coœ przyad³a 
{
	int l1 = 0, l2 = 1, i =1;
	while (n>i)
	{
		l1 += l2;
		i++;
		if (n != i)
		{
			l2 += l1;
			i++;
		}
		else break;
	}
	return  (l1 > l2) ? l1 : l2;
}