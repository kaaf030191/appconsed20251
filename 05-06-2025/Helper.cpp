#ifndef HELPER_CLASS_CPP
#define HELPER_CLASS_CPP

#include "Helper.h"

int Helper::xPow(int base, int varPow) {
	if(varPow == 0) {
		return 1;
	}
	
	if(varPow == 1) {
		return base;
	}
	
	return base * xPow(base, varPow - 1);
}

int Helper::palindromo(std::string word, int length) {
	if(length == 0) {
		return true;
	}

	if(word[length - 1] == word[0 + word.length() - length]) {
		palindromo(word, length - 1);
	} else {
		return false;
	}
}

#endif