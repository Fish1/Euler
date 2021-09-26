#include <iostream>
#include <cstdint>
#include <cmath>

bool isPrime(uint64_t a) {
	if(a % 2 == 0) {
		return false;
	}
	for(uint64_t index = 3; index <= sqrt(a); index += 2) {
		if(a % index == 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	uint64_t number = 600851475143;
	uint64_t index = sqrt(number);
	if(index % 2 == 0) {
		index -= 1;
	}

	while(index > 1) {
		if(number % index == 0 && isPrime(index)) {
			std::cout << index << std::endl;
			break;
		}
		index -= 2;
	}

	return 0;
}
