#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d)
{
	if (n%d == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isPrime(int n)
{
	for (int i=2; i<n; i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int nextPrime(int n)
{
	int nextNum = n+1;
	while (isPrime(nextNum) == false)
	{
		nextNum++;
	}
	return nextNum;
}

int countPrimes(int a, int b)
{
	int amtOfPrimes = 0;
	for (int i=a; i<=b; i++)
	{
		if (isPrime(i) == true)
		{
			amtOfPrimes++;
		}
	} 
	return amtOfPrimes;
}

