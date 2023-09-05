#pragma once
#include "Person.h"
#include "PersonMedTel.h"

class PersonReg1
{
public:
	int maxSize;
	int i;

	PersonReg1(const int maxSize_);
	void Insert(Person* ptr);
	void CheckAdress(std::string name_);
	void DeletePerson(Person* pptr);
	void Print();
	void Empty();
	Person* Begin();
	Person* End();
	Person* FreeSearch(std::string search, Person* ptr);
	~PersonReg1();
};

