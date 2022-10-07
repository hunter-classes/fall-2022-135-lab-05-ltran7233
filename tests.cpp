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
	CHECK(isPrime(0) == false);
	CHECK(isPrime(-10) == false);
	CHECK(isPrime(1) == false);
}

TEST_CASE("nextPrime Tests")
{
	CHECK(nextPrime(13) == 17);
	CHECK(nextPrime(74) == 79);
	CHECK(nextPrime(4) == 5);
	CHECK(nextPrime(0) == 2);
	CHECK(nextPrime(-10) == 2);
}

TEST_CASE("countPrimes Tests")
{
	CHECK(countPrimes(2, 13) == 6);
	CHECK(countPrimes(4, 30) == 8);
	CHECK(countPrimes(0, 7) == 4);
	CHECK(countPrimes(-10, 12) == 5);
}

TEST_CASE("isTwinPrime Tests")
{
	CHECK(isTwinPrime(19) == true);
	CHECK(isTwinPrime(5) == true);
	CHECK(isTwinPrime(2) == false);
	CHECK(isTwinPrime(-59) == false);
	CHECK(isTwinPrime(0) == false);
}

TEST_CASE("nextTwinPrime Tests")
{
	CHECK(nextTwinPrime(7) == 11);
	CHECK(nextTwinPrime(2) == 3);
	CHECK(nextTwinPrime(5) == 7);
	CHECK(nextTwinPrime(13) == 17);
	CHECK(nextTwinPrime(-10) == 3);
	CHECK(nextTwinPrime(0) == 3);
}

TEST_CASE("largestTwinPrime Tests")
{
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(14, 16) == -1);
	CHECK(largestTwinPrime(2, 14) == 13);
	CHECK(largestTwinPrime(23, 24) == -1);
	CHECK(largestTwinPrime(-10, -5) == -1);
	CHECK(largestTwinPrime(0, 1) == -1);
	CHECK(largestTwinPrime(-1, 5) == 5);
}
