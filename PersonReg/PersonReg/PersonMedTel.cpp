#include "PersonMedTel.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <array>
#include <fstream>

	//std::string number, name, adress;
	PersonMedTel::PersonMedTel(std::string name_, std::string adress_, std::string number_) : Person(name_, adress_)
	{
		name = name_;
		adress = adress_;
		number = number_;
	}

	void PersonMedTel::Print()
	{
		std::cout << name;
	};
