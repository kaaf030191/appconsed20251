#ifndef HELPER_CLASS_CPP
#define HELPER_CLASS_CPP

#include <iostream>

#include "Helper.h"

int Helper::boxCount(int levelQuantity) {
	if(levelQuantity == 1) {
		return levelQuantity;
	}
	
	return levelQuantity + boxCount(levelQuantity - 1);
}

void Helper::moneyCount(int amount, int currentMoney = 100, int sum = 0) {
	if(currentMoney <= amount) {
		sum += 1;

		if(amount - currentMoney < currentMoney) {
			std::cout << "La cantidad de billetes/monedas de " << currentMoney << " es: " << sum << std::endl;

			sum = 0;
		}

		moneyCount(amount - currentMoney, currentMoney, sum);
	} else {
		switch(currentMoney) {
			case 100: currentMoney = 50; break;
			case 50: currentMoney = 20; break;
			case 20: currentMoney = 10; break;
			case 10: currentMoney = 5; break;
			case 5: currentMoney = 1; break;

			default: return;
		}

		moneyCount(amount, currentMoney, sum);
	}
}

#endif