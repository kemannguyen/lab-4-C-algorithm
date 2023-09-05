#include "Person.h"
#include <iostream>
#include <string>
#include <array>
#include <fstream>


Person::Person(std::string name_, std::string adress_)
{
	id++;
	name = name_;
	adress = adress_;
	persnr = id;
}
Person::Person()
{
	name = "";
	persnr = -1;
}

//bool Person::operator<(const Person& that) {
//	return this->name < that.name;
//}

bool Person::operator<(const Person& that){
	return this->adress > that.adress;
}

void Person::Print() {};


