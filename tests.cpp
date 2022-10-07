#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy Tests")
{
	CHECK(isDivisibleBy(20, 5) == true);
	CHECK(isDivisibleBy(-15, 3) == true);
	CHECK(isDivisibleBy(-100, -2) == true);
	CHECK(isDivisibleBy(87, 6) == false);
	CHECK(isDivisibleBy(34, 7) == false);
}

TEST_CASE("isPrime Tests")
{
	CHECK(isPrime(47) == true);
	CHECK(isPrime(29) == true);
	CHECK(isPrime(22) == false);
	CHECK(isPrime(-10) == false);
	CHECK(isPrime(1) == false);
}

TEST_CASE("nextPrime Tests")
{
	CHECK(nextPrime(12) == 13);
	CHECK(nextPrime(4) == 5);
	CHECK(nextPrime(17) == 19);
	CHECK(nextPrime(23) == 29);
}

TEST_CASE("countPrimes Tests")
{
	CHECK(countPrimes(2, 13) == 6);
	CHECK(countPrimes(4, 30) == 8);
	CHECK(countPrimes(29, 56) == 7);
}

TEST_CASE("isTwinPrime Tests")
{
	CHECK(isTwinPrime(19) == true);
	CHECK(isTwinPrime(5) == true);
	CHECK(isTwinPrime(2) == false);
	CHECK(isTwinPrime(47) == false);
}

TEST_CASE("nextTwinPrime Tests")
{
	CHECK(nextTwinPrime(7) == 11);
	CHECK(nextTwinPrime(2) == 3);
	CHECK(nextTwinPrime(5) == 7);
	CHECK(nextTwinPrime(13) == 17);
}
