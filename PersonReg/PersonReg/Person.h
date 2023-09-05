#pragma once
#include <iostream>
#include <string>
#include <array>
#include <fstream>

static int id = -1;

class Person
{

public:
	std::string name, adress;
	int persnr;
	Person(std::string name_, std::string adress_);
	Person();
	bool operator<(const Person& that);

	virtual void Print();
};
