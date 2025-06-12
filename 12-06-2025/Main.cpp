#include <iostream>

#include "Operation.cpp"

int main() {
	Operation op;

	op.structPerson[0].firstName = "Kevin Arnold";
	op.structPerson[0].surName = "Arias Figueroa";
	op.structPerson[0].structPhone[0].number = "956248003";
	op.structPerson[0].structPhone[0].provider = "Claro";
	op.structPerson[0].structPhone[1].number = "989787677";
	op.structPerson[0].structPhone[1].provider = "Movistar";

	op.structPerson[1].firstName = "Alice";
	op.structPerson[1].surName = "Arias Quispe";
	op.structPerson[1].structPhone[0].number = "956248001";
	op.structPerson[1].structPhone[0].provider = "Bitel";
	op.structPerson[1].structPhone[1].number = "989787671";
	op.structPerson[1].structPhone[1].provider = "Entel";

	for(unsigned int i = 0; i < 2; i++) {
		std::cout << op.structPerson[i].firstName << " " << op.structPerson[i].surName << std::endl;
	
		for(unsigned int j = 0; j < 2; j++) {
			std::cout << "\t" << op.structPerson[i].structPhone[j].number << " (" << op.structPerson[i].structPhone[j].provider << ")" << std::endl;
		}

		std::cout << std::endl << std::endl;

	}

	return 0;
}