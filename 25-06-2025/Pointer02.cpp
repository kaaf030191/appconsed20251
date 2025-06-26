#include <iostream>

void testFunction01(int &z) {
	z = 10;
}

void testFunction02(int &z) {
	z = 100;
}

int main() {
	int x = 7;
	int *y;

	testFunction01(x);

	std::cout << x << std::endl;

	int *pointer = &x;

	testFunction02(*pointer);

	std::cout << x << std::endl;

	return 0;
}