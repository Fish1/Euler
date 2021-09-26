#include <iostream>

int main(void) {
	unsigned int sum = 0;
	for(unsigned int index = 1; index < 1000; index += 1) {
		if(index % 3 == 0 || index % 5 == 0) {
			sum += index;
		}
	}
	std::cout << sum << std::endl;
	return 0;
}
