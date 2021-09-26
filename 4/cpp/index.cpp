#include <iostream>
#include <cstdint>
#include <string>

bool isPalendrome(uint64_t number) {
	std::string data = std::to_string(number);
	for(uint64_t indexA = 0, indexB = data.length() - 1;
		indexA <= indexB; indexA += 1, indexB -= 1) {
		if(data[indexA] != data[indexB]) {
			return false;
		}
	}
	return true;
}

int main(void) {
	uint64_t largest = 0;
	for(uint64_t a = 100; a <= 999; a += 1) {
		for(uint64_t b = 100; b <= 999; b += 1) {
			uint64_t number = a * b;
			if(number > largest && isPalendrome(number)) {
				largest = number;	
			}		
		}
	}
	std::cout << largest << std::endl;
	return 0;
}
