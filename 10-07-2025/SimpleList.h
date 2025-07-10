#ifndef SIMPLE_LIST_H
#define SIMPLE_LIST_H

#include "SimpleNode.h"

class SimpleList {
	public:
		SimpleNode *head = nullptr;

		void addElement(SimpleNode *data);
		void showElements();
};

#endif