#include <iostream>

#include "SimpleList.cpp"

int main() {
	SimpleList simpleList;

	SimpleNode *data1 = new SimpleNode();

	data1->dni = "77777777";
	data1->firstName = "Kevin Arnold";
	data1->surName = "Arias Figueroa";

	SimpleNode *data2 = new SimpleNode();

	data2->dni = "11111111";
	data2->firstName = "Litzy Alice Ilein";
	data2->surName = "Arias Figueroa";

	simpleList.addElement(data1);
	simpleList.addElement(data2);

	simpleList.showElements();

	return 0;
}