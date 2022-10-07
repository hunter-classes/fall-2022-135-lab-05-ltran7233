#include <iostream>
#include "funcs.h"

int main()
{
	std::cout << "isDivisibleBy(100, 25) is " << isDivisibleBy(100, 25) << std::endl;
	std::cout << "isDivisibleBy(35, 17) is " << isDivisibleBy(35, 17) << std::endl;
	std::cout << "isPrime(2) is " << isPrime(2) << std::endl;
	std::cout << "isPrime(13) is " << isPrime(13) << std::endl;
	std::cout << "nextPrime(14) is " << nextPrime(14) << std::endl;
	std::cout << "nextPrime(17) is " << nextPrime(17) << std::endl;
	std::cout << "countPrimes(5, 12) is " << countPrimes(5, 12) << std::endl;
	std::cout << "isTwinPrime(17) is " << isTwinPrime(17) << std::endl;
	std::cout << "nextTwinPrime(3) is " << nextTwinPrime(3) << std::endl;
	return 0;
}
