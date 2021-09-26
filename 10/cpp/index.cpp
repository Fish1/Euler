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

	uint64_t res = 0;

	for(uint64_t index = 2; index < 2000000; index += 1) {
		if(isPrime(index) == true) {
			res += index;	
		}
	}

	std::cout << res << std::endl;

	return 0;
}
