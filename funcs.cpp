#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d) // task A
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

bool isPrime(int n) // task B
{
	if (n > 1)
	{
		for (int i=2; i<n; i++)
		{
			if (isDivisibleBy(n, i))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int nextPrime(int n) // task C
{
	int nextNum = n+1;
	while (isPrime(nextNum) == false)
	{
		nextNum++;
	}
	return nextNum;
}

int countPrimes(int a, int b) // task D
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

bool isTwinPrime(int n) // task E
{
	if (isPrime(n)==false)
	{
		return false;
	}
	if (isPrime(n-2)==true || isPrime(n+2)==true)
	{
		return true;
	}
	return false;
}

int nextTwinPrime(int n) // task F
{
	int nextNum = nextPrime(n);
	while (isTwinPrime(nextNum) == false)
	{
		nextNum++;
	}
	return nextNum; 
}

int largestTwinPrime(int a, int b) // task G
{
	int prime = -1;
	for (int i=a; i<=b; i++)
	{
		if (isPrime(i) == true)
		{
			if (isTwinPrime(i)==true)
			{
				prime = i;
			}
		}
	}
	if (prime != -1)
	{
		return prime;
	}
	else
	{
		return -1;
	}
}
