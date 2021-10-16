#include <iostream>
#include <cstdint>

uint64_t collatz(uint64_t number) {
	uint64_t result = 1;
	while(number != 1) {
		result += 1;
		if(number % 2 == 0) {
			number = number / 2;
		} else {
			number = (3 * number) + 1;
		}
	}
	return result;
}

int main(void) {
	uint64_t index = 1;
	uint64_t longestChain = 0;
	uint64_t longestIndex = 1;

	while(index < 1000000) {
		uint64_t length = collatz(index);
		if(length > longestChain) {
			longestChain = length;
			longestIndex = index;
		}
		index += 1;
	}

	std::cout << "Number: " << longestIndex << std::endl;
	std::cout << "Length: " << longestChain << std::endl;

	return 0;
}
