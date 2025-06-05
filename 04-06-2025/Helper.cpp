#ifndef HELPER_CLASS_CPP
#define HELPER_CLASS_CPP

#include "Helper.h"

int Helper::factorial(int n) {
	if(n == 2) {
		return n;
	}

	return n * factorial(n - 1);
}

int Helper::addNumber(int n, std::string method) {
	//method => recursion, loop, formula

	char option = method == "recursion" ? 'R' : (method == "loop" ? 'L' : 'F');

	// if(method == "recursion") {
	// 	option = 'R';
	// } else {
	// 	if(method == "loop") {
	// 		option = 'L';
	// 	} else {
	// 		option = 'F';
	// 	}
	// }

	int tempValue = 0;

	switch (option) {
		case 'R':
			if(n == 1) {
				return n;
			}

			return n + addNumber(n - 1, method);

		case 'L':
			for(unsigned int i = 1; i <= n; i++) {
				tempValue += i;
			}

			return tempValue;
		
		case 'F':
			return (n * (n + 1)) / 2;
	}
}

int Helper::addVector(int x[], int index) {
	if(index == 0) {
		return x[index];
	}

	return x[index] + addVector(x, index - 1);
}

#endif