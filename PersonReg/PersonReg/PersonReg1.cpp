#include "PersonReg1.h"
#include <iostream>
#include <string>
#include <array>
#include <fstream>
#include "Person.h"
#include "PersonMedTel.h"



Person* personer;
int maxSize;


PersonReg1::PersonReg1(const int maxSize_)
{
	maxSize = maxSize_;
	personer = new Person[maxSize_];
}
void PersonReg1::Insert(Person* pptr)
{
	Person onlyForCout;
	bool added = false;
	for (Person* ptr = personer; ptr != personer + maxSize; ++ptr)
	{
		Person tempPers = *ptr;
		if (tempPers.name == "" && !added)
		{
			*ptr = *pptr;
			onlyForCout = *ptr;
			added = true;
		}
	}
	std::cout << "Insterting... ";
	std::cout << "Object adress: " << pptr << " | Array adress: " << &onlyForCout << " Added: " << onlyForCout.name << std::endl;

}

Person* PersonReg1::Begin() { return personer; }

Person* PersonReg1::End() { return personer + maxSize; }

//you find a person by searching by full name, not sure if you guys want me to return a ptr here or not
void PersonReg1::CheckAdress(std::string name_)
{
	std::cout << "searching for " << name_ << std::endl;

	for (Person* ptr = personer; ptr != personer + maxSize; ++ptr)
	{
		Person temp = *ptr;
		if (name_ == temp.name) {
			std::cout << " " << temp.name << " adress: " << ptr << " " << temp.persnr << std::endl;
			/*Person* tempptr = &personer[x];
			return tempptr;*/ //om man ska returnera en pointer??

		}
		else {
			//std::cout << x << "\n";
		}
	}
	std::cout << "-----------------------------" << std::endl;
}

//"deletes" a person, basicly it moves all elements forward after the deletion 
//index and makes the "empty" slots into persons with defult contructiors
void PersonReg1::DeletePerson(Person* pptr)
{
	bool deleted = false;
	Person del = *pptr;
	for (Person* ptr = personer; ptr != personer + maxSize; ++ptr)
	{
		Person tempPers = *ptr;
		if (del.persnr == tempPers.persnr) {
			deleted = true;
			std::cout << "Deleted at: " << pptr << " array Copy adress: " << std::endl;
			std::cout << "Deleted: " << tempPers.name << std::endl;
		}
		if (deleted && ptr != personer + maxSize - 1)
		{
			*ptr = *(ptr + 1);
			Person p;
			*(ptr + 1) = p;
		}
	}
	std::cout << "-----------------------------" << std::endl;
}

void PersonReg1::Print()
{
	std::cout << "Show all adresses in array\n";
	for (Person* ptr = personer; ptr != personer + maxSize; ++ptr)
	{
		Person tempPers = *ptr;
		std::cout << ptr << " : " << tempPers.name << " " <<
			tempPers.adress << " " << tempPers.persnr << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
}

//makes all elements into defult persons
void PersonReg1::Empty()
{
	std::cout << "Empty array\n";
	for (Person* ptr = personer; ptr != personer + maxSize; ++ptr)
	{
		Person defultp;
		*ptr = defultp;
	}
}

//returns a person ptr if anything matches
Person* PersonReg1::FreeSearch(std::string search, Person* ptr)
{
	std::cout << "\nsearching for " << search << std::endl;
	Person fromptr;
	Person* tempptr = nullptr;
	if (ptr != nullptr) {
		fromptr = *ptr;
	}
	for (Person* ptr = personer; ptr != personer + maxSize; ++ptr)
	{
		Person searchPers = *ptr;
		std::size_t found1 = searchPers.name.find(search);
		if (found1 != std::string::npos) {
			if (searchPers.persnr != fromptr.persnr) {
				std::cout << search << " found at: " << searchPers.name << std::endl;
				tempptr = ptr;
				return tempptr;
			}
		}

		std::size_t found2 = searchPers.adress.find(search);
		if (found2 != std::string::npos) {
			if (searchPers.persnr != fromptr.persnr) {
				std::cout << search << " found at: " << searchPers.adress << std::endl;
				tempptr = ptr;
				return tempptr;
			}
		}
		std::cout << std::endl;
	}
	return tempptr;
}
PersonReg1::~PersonReg1()
{
	if (personer) {
		delete[]personer;
	}
}