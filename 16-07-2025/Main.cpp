#include <iostream>

#include "DoubleList.cpp"

int main() {
	DoubleList doubleList;

	DoubleNode *data1 = new DoubleNode();

	data1->dni = "77777777";
	data1->firstName = "Kevin Arnold";
	data1->surName = "Arias Figueroa";

	DoubleNode *data2 = new DoubleNode();

	data2->dni = "11111111";
	data2->firstName = "Litzy Alice Ilein";
	data2->surName = "Arias Figueroa";

	doubleList.addElement(data1);
	doubleList.addElement(data2);

	// doubleList.showElements();

	// std::cout << "[" << doubleList.head->dni << "] " << doubleList.head->firstName << " " << doubleList.head->surName << std::endl;
	// std::cout << "[" << doubleList.head->next->dni << "] " << doubleList.head->next->firstName << " " << doubleList.head->next->surName << std::endl;
	std::cout << "[" << doubleList.head->next->back->dni << "] " << doubleList.head->next->back->firstName << " " << doubleList.head->next->back->surName << std::endl;

	return 0;
}