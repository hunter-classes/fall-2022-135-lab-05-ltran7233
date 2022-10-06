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
