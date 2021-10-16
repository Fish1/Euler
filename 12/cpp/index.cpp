#include <iostream>
#include <cstdint>

uint64_t countDivisors(uint64_t number) {
	uint64_t result = 1;

	uint64_t count = 1;
	while(number % 2 == 0) {
		std::cout << 2 << " ";
		number /= 2;
		count += 1;
	}
	result *= count;

	for(uint64_t index = 3; index <= number; index += 2) {
		count = 1;
		while(number % index == 0) {
			std::cout << index << " ";
			number /= index;
			count += 1;
		}
		result *= count;
	}

	return result;
}

int main(void) {
	uint64_t index = 0;
	uint64_t triangle = 0;
	uint64_t divisors = 0;

	do {
		index += 1;
		triangle += index;
		std::cout << triangle << ": ";
		divisors = countDivisors(triangle);
		std::cout << std::endl;
	} while(divisors < 500);

	std::cout << std::endl;
	std::cout << "Index: " << index << std::endl;
	std::cout << "Triangle: " << triangle << std::endl;
	std::cout << "Divisors: " << divisors << std::endl;
	std::cout << std::endl;

	return 0;
}
