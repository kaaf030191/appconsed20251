#ifndef SIMPLE_NODE_H
#define SIMPLE_NODE_H

#include <string>

struct SimpleNode {
	public:
		std::string dni;
		std::string firstName;
		std::string surName;

		SimpleNode *next = nullptr;
};

#endif