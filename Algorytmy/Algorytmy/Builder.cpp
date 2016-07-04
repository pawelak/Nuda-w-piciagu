#include "stdafx.h"
#include "Builder.h"

LARGE_INTEGER Builder::startTimer()
{
	LARGE_INTEGER start;
	DWORD_PTR oldmask = SetThreadAffinityMask(GetCurrentThread(), 0);
	QueryPerformanceCounter(&start);
	SetThreadAffinityMask(GetCurrentThread(), oldmask);
	return start;
}

LARGE_INTEGER Builder::endTimer()
{
	LARGE_INTEGER stop;
	DWORD_PTR oldmask = SetThreadAffinityMask(GetCurrentThread(), 0);
	QueryPerformanceCounter(&stop);
	SetThreadAffinityMask(GetCurrentThread(), oldmask);
	return stop;
}


Builder::Builder()
{
}


Builder::~Builder()
{
}


void Builder::makeFactorial()		//dziwne rzeczy bo for najszybszy 
{
	int howMuchElementsOfFactorial;
	Factorial f;
	cout << "podaj do ile el silni ";
	cin >> howMuchElementsOfFactorial;

	cout << "--------------proba czasow dla silni------------- " << endl;

	cout << "rekurencyjnie robi to w czasie: ";
	CountStart = startTimer();
	f.factorialR(howMuchElementsOfFactorial);
	CountEnd = endTimer();
	timeOperation.QuadPart = CountEnd.QuadPart - CountStart.QuadPart;
	QueryPerformanceFrequency(&freq);
	tm = ((double)timeOperation.QuadPart) * 1000000000 / freq.QuadPart;	//bedzie w nano sekundach
	cout << tm << endl << "a wynik to: " << f.factorialR(howMuchElementsOfFactorial);
	cout << endl << endl;

	cout << "iteracyjnie(whilem) robi w czasie: ";
	CountStart = startTimer();
	f.factorialIter(howMuchElementsOfFactorial);
	CountEnd = endTimer();
	timeOperation.QuadPart = CountEnd.QuadPart - CountStart.QuadPart;
	QueryPerformanceFrequency(&freq);
	tm = ((double)timeOperation.QuadPart) * 1000000000 / freq.QuadPart;	//bedzie w nano sekundach
	cout << tm << endl << "a wynik to: " << f.factorialIter(howMuchElementsOfFactorial);
	cout << endl << endl;

	cout << "interacyjnie(na forze) robi w czasie: ";
	CountStart = startTimer();
	f.factorialIterFor(howMuchElementsOfFactorial);
	CountEnd = endTimer();
	timeOperation.QuadPart = CountEnd.QuadPart - CountStart.QuadPart;
	QueryPerformanceFrequency(&freq);
	tm = ((double)timeOperation.QuadPart) * 1000000000 / freq.QuadPart;	//bedzie w nano sekundach
	cout << tm << endl << "a wynik to: " << f.factorialIterFor(howMuchElementsOfFactorial);
	cout << endl << endl;

}


void Builder::makeFibonacci()
{
	int whitchNumber;
	Fibonacci fib;
	cout << "podaj który elemen ci¹gu chcesz ";
	cin >> whitchNumber;

	cout << "--------------proba czasow dla ci¹gu fibonacziego------------- " << endl;
	cout << "rekurencyjnie robi to w czasie: ";
	CountStart = startTimer();
	fib.fibonaciiR(whitchNumber);
	CountEnd = endTimer();
	timeOperation.QuadPart = CountEnd.QuadPart - CountStart.QuadPart;
	QueryPerformanceFrequency(&freq);
	tm = ((double)timeOperation.QuadPart) * 1000000000 / freq.QuadPart;	//bedzie w nano sekundach
	cout << tm << endl << "a wynik to: " << fib.fibonaciiR(whitchNumber);
	cout << endl << endl;

	cout << "moje robi to w czasie: ";
	CountStart = startTimer();
	fib.fibonaciiMoj(whitchNumber);
	CountEnd = endTimer();
	timeOperation.QuadPart = CountEnd.QuadPart - CountStart.QuadPart;
	QueryPerformanceFrequency(&freq);
	tm = ((double)timeOperation.QuadPart) * 1000000000 / freq.QuadPart;	//bedzie w nano sekundach
	cout << tm << endl << "a wynik to: " << fib.fibonaciiMoj(whitchNumber);
	cout << endl << endl;
}

void Builder::makeEuklides()
{
	int a, b;
	Euklides e;
	cout << "podaj który elemen ci¹gu chcesz ";
	cin >> a >> b;

	cout << "--------------proba czasow dla ci¹gu fibonacziego------------- " << endl;
	cout << "whilem robi to w czasie: ";
	CountStart = startTimer();
	e.EuklidesWhilem(a, b);
	CountEnd = endTimer();
	timeOperation.QuadPart = CountEnd.QuadPart - CountStart.QuadPart;
	QueryPerformanceFrequency(&freq);
	tm = ((double)timeOperation.QuadPart) * 1000000000 / freq.QuadPart;	//bedzie w nano sekundach
	cout << tm << endl << "a wynik to: " << e.EuklidesWhilem(a, b);
	cout << endl << endl;

	cout << "whilem po modyfikacji robi to w czasie: ";
	CountStart = startTimer();
	e.EuklidesWhilemMod(a, b);
	CountEnd = endTimer();
	timeOperation.QuadPart = CountEnd.QuadPart - CountStart.QuadPart;
	QueryPerformanceFrequency(&freq);
	tm = ((double)timeOperation.QuadPart) * 1000000000 / freq.QuadPart;	//bedzie w nano sekundach
	cout << tm << endl << "a wynik to: " << e.EuklidesWhilemMod(a, b);
	cout << endl << endl;
}