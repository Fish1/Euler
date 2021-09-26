#include <iostream>
#include <cstdint>

int main(void) {
	std::cout << "Hello World" << std::endl;
	for(uint64_t a = 0; a < 1000; a += 1) {
		for(uint64_t b = a + 1; b < 1000; b += 1) {
			for(uint64_t c = b + 1; c < 1000; c += 1) {
				if( a + b + c != 1000 || (a * a) + (b * b) != (c * c)) {
					continue;
				} else {
					std::cout << a << " " << b << " " << c << std::endl;
					std::cout << "a^2 = " << a * a << std::endl;
					std::cout << "b^2 = " << b * b << std::endl;
					std::cout << "c^2 = " << c * c << std::endl;
					std::cout << "a^2 + b^2 = " << (a * a) + (b * b) << std::endl;
					std::cout << "a + b + c = " << a + b + c << std::endl;
					std::cout << "a * b * c = " << a * b * c << std::endl;
					break;
				}
			}
		}
	}
	return 0;
}
