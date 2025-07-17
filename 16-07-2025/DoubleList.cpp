#ifndef DOUBLE_LIST_CPP
#define DOUBLE_LIST_CPP

#include <iostream>
#include <string>

#include "DoubleList.h"

void DoubleList::addElement(DoubleNode *data) {
	if(this->head == nullptr) {
		this->head = data;

		return;
	}

	DoubleNode *currentNode = this->head;

	while(currentNode->next != nullptr) {
		currentNode = currentNode->next;
	}

	currentNode->next = data;
	currentNode->next->back = currentNode;
}

void DoubleList::showElements() {
	DoubleNode *currentNode = this->head;

	if(currentNode == nullptr) {
		std::cout << "No existen elementos en la lista" << std::endl;

		return;
	}

	while(currentNode != nullptr) {
		std::cout << "[" << currentNode->dni << "] " << currentNode->firstName << " " << currentNode->surName << std::endl;

		currentNode = currentNode->next;
	}
}

#endif