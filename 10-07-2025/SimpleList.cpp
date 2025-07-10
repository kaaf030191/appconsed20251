#ifndef SIMPLE_LIST_CPP
#define SIMPLE_LIST_CPP

#include <iostream>
#include <string>

#include "SimpleList.h"

void SimpleList::addElement(SimpleNode *data) {
	if(this->head == nullptr) {
		this->head = data;

		return;
	}

	SimpleNode *currentNode = this->head;

	while(currentNode->next != nullptr) {
		currentNode = currentNode->next;
	}

	currentNode->next = data;
}

void SimpleList::showElements() {
	SimpleNode *currentNode = this->head;

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