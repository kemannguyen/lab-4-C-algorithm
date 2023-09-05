// PersonReg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <array>
#include <fstream>
#include <cstdlib>
#include <random>
#include <algorithm>

#include "Person.h"
#include "PersonMedTel.h"
#include "PersonReg1.h"

//read by file
bool ReadReg(PersonReg1& reg, std::string fileName)
{

	std::string line;
	std::ifstream myfile(fileName);
	if (myfile.is_open())
	{
		while (std::getline(myfile, line))
		{
			while (line.length() == 0 && std::getline(myfile, line))
				;
			std::string name(line);
			std::string adress;
			std::getline(myfile, adress);
			reg.Insert(&Person(name, adress));
		}
		myfile.close();
		return true;
	}
	else
	{
		std::cout << "Unable to open file";
		return false;
	}
}

//void Test1()
//{
//	PersonReg1 reg(10);
//	ReadReg(reg, "PersonExempel.txt");
//	reg.Print();
//	std::cout << "\n\n";
//	reg.Empty();
//	reg.Print();
//}

void Selftest()
{
	const int maxSize = 10;

	PersonReg1 perReg = PersonReg1(maxSize);
	ReadReg(perReg, "PersonExempel.txt");
	Person* p[maxSize];

	Person a("ali", "Hyllie"), b("ali", "Möllan"), c("ali", "folkan"),
		d("oogabooga", "monsterland"), e("ali", "boll"), f("ali", "cat"), g("ali", "damn"),
		h("ali", "trod");

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	p[3] = &d;
	p[4] = &e;
	p[5] = &f;
	p[6] = &g;

	perReg.Insert(p[0]);
	perReg.Insert(p[1]);
	perReg.Insert(p[2]);
	perReg.Insert(p[3]);
	perReg.Insert(p[4]);
	perReg.Insert(p[5]);
	perReg.Insert(p[6]);


	perReg.Print();
	perReg.DeletePerson(p[0]);
	perReg.Print();
	perReg.CheckAdress("keman");
	perReg.Print();

	Person* kok = perReg.FreeSearch("a", nullptr);

	Person* kok2 = perReg.FreeSearch("a", kok);
	perReg.Empty();
	perReg.Print();


	std::string test1 = (*kok).name;
	std::cout << test1;

	std::cout << "end";
	/*Person *pointer = perReg.FreeSearch("helena");
	std::string name2 = (*pointer).name;
	std::cout << " Stest "<< name2 << std::endl;*/

	std::cout << "test object adresses\n";
	for (int i = 0; i < maxSize; i++)
	{
		std::cout << p[i] << std::endl;
	}
	PersonMedTel nr1("zozo", "anka", "040");
	nr1.Print();
}
void HumanSort()
{
	const int maxSize = 10;

	PersonReg1 perReg = PersonReg1(maxSize);
	Person a("ali", "hyllie"), b("ali", "möllan"), c("ali", "folkan"),
		d("oogabooga", "monsterland"), e("ali", "boll"), f("ali", "cat"), g("ali", "damn"),
		h("ali", "trod"), i("lars", "kent"), j("ali", "tend");
	Person* p[maxSize];

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	p[3] = &d;
	p[4] = &e;
	p[5] = &f;
	p[6] = &g;
	p[7] = &h;
	p[8] = &i;
	p[9] = &j;

	for (int i = 0; i < maxSize; i++)
	{
		if (p[i] != nullptr )
		{
			perReg.Insert(p[i]);
		}
	}
	std::random_shuffle(perReg.Begin(),perReg.End());

	perReg.Print();
	std::sort(perReg.Begin(), perReg.End());

	perReg.Print();
}

int main()
{

	//Test1();
	//Selftest();

	//lab4 2, ändra i person bool för 2a/2b
	HumanSort();
	//
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
