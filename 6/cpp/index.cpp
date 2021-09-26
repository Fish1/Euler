#include <iostream>
#include <cstdint>

int main(void) {
	uint64_t max = 100;

	uint64_t a = 0;
	for(uint64_t index = 1; index <= max; index += 1) {
		a += index * index;	
	}


	uint64_t b = 0;
	for(uint64_t index = 1; index <= max; index += 1) {
		b += index;	
	}
	b *= b;

	uint64_t diff = b - a;

	std::cout << diff << std::endl;	

	return 0;
}
