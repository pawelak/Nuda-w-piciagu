#pragma once
#include "Factorial.h"
#include <Windows.h>
#include "Fibonacci.h"
#include "Euklides.h"

class Builder : private  Factorial, private Fibonacci, private Euklides
{
	LARGE_INTEGER CountStart, CountEnd, freq, timeOperation;
	double tm;
public:
	Builder();
	~Builder();
	void makeFactorial();
	void makeFibonacci();
	void makeEuklides();
	LARGE_INTEGER startTimer();
	LARGE_INTEGER endTimer();
};

