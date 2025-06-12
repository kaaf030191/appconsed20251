#ifndef PERSON_STRUCT
#define PERSON_STRUCT

#include <string>

#include "StructPhone.cpp"

struct StructPerson {
	std::string firstName;
	std::string surName;
	StructPhone structPhone[100];
};

#endif