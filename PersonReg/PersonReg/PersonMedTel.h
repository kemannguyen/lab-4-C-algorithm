#pragma once
#include "Person.h"

class PersonMedTel : public Person
{
	std::string number, name, adress;
public:
	PersonMedTel(std::string name_, std::string adress_, std::string number_);

	void Print() override;
};

