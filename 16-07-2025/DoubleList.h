#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

#include "DoubleNode.h"

class DoubleList {
	public:
		DoubleNode *head = nullptr;

		void addElement(DoubleNode *data);
		void showElements();
};

#endif