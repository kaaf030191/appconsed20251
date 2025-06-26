#include <iostream>
#include <fstream>

int main() {
	std::ofstream myFile("output.txt");

	int x = 7;
	int y = 10;
	int *pointer = &x;

	myFile << &x << " >> " << x << std::endl;
	myFile << &y << " >> " << y << std::endl;
	myFile << pointer << " >> " << *pointer << std::endl;
	myFile << "------------------------------------------" << std::endl;

	for(unsigned int i = 0; i < 700 ; i++) {
		pointer = (pointer + 1);

		myFile << pointer << " >> " << *pointer << std::endl;
	}

	myFile.close();

	return 0;
}