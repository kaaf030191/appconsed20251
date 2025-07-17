#ifndef DOUBLE_NODE_H
#define DOUBLE_NODE_H

#include <string>

struct DoubleNode {
	public:
		std::string dni;
		std::string firstName;
		std::string surName;

		DoubleNode *next = nullptr;
		DoubleNode *back = nullptr;
};

#endif