#include <iostream>
#include <cstdint>

bool divisible(uint64_t number, uint64_t high) {
	for(uint64_t index = high/2; index <= high; index += 1) {
		if(number % index != 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	for(uint64_t index = 2; index <= 50; index += 1) {
		uint64_t mult = 1;
		while(divisible(index * mult, index) == false) {
			mult += 1;
		}
		std::cout << "Index: " << index << " Common: " << index * mult << std::endl;
	}
	return 0;
}
