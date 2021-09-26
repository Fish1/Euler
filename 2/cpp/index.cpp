#include <iostream>

int main(void) {
	unsigned int a = 2;
	unsigned int b = 3;
	unsigned int current = 5;
	unsigned int res = 2;
	while(true) {
		a = b;
		b = current;
		current = a + b;
		if(current > 4000000) {
			break;
		} else if(current % 2 == 0) {
			res += current;
		}	
	}
	std::cout << res << std::endl;
	return 0;
}
