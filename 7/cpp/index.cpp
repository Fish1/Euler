#include <iostream>
#include <cstdint>
#include <cmath>

bool isPrime(uint64_t number) {
	if(number == 1) {
		return false;
	}

	if(number == 2) {
		return true;
	}

	for(uint64_t index = 2; index <= sqrt(number); index += 1) {
		if(number % index == 0) {
			return false;
		}
	}

	return true;	
}

int main(void) {
	uint64_t prime_count = 0;
	uint64_t number = 1;
	while(prime_count < 10001) {
		if(isPrime(number) == true) {
			prime_count += 1;
			std::cout << "Number: " << number << " Count: " << prime_count << std::endl;
		}
		number += 1;	
	}
	return 0;
}
