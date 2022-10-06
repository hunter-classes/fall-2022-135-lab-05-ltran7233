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
	CHECK(isPrime(65) == false);
	CHECK(isPrime(100) == false);
}

TEST_CASE("nextPrime Tests")
{
	CHECK(nextPrime(12) == 13);
	CHECK(nextPrime(4) == 5);
	CHECK(nextPrime(17) == 19);
	CHECK(nextPrime(23) == 29);
}
