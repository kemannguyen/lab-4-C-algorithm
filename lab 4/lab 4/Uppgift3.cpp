#include "Uppgift3.h"
#include <algorithm>
#include <iostream>
#include <vector>

bool Even(int i) { return ((i % 2) == 0); }

void Uppgift3::CreateNDelete()
{
	std::cout << "3. Radera element" << std::endl;

	std::vector<int> tal(20);
	int inttal[20];
	int max = tal.size();
	int intmax = sizeof(inttal) / sizeof(int);

	for (int i = 0; i < max; i++)
	{
		int r = rand();
		tal[i] = r;
		inttal[i] = r;
	}


	int* arrBegin = inttal;
	int* arrEnd = inttal + intmax;


	for (int i = 0; i < max; i++)
	{
		std::cout << tal[i] << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	
	//std::cout << "raderar jämna tal med endast erase och remove if, och sedan printar ut alla element \n" << std::endl;

	//raderar de jämna talen;
	/*tal.erase(std::remove_if(tal.begin(), tal.end(), Even));
	for (auto i : tal)
	{
		std::cout << ' ' << i << std::endl;
	}*/


	//bättre print version med pekare
	arrEnd = std::remove_if(arrBegin, arrEnd, Even);
	std::cout << std::endl;
	std::cout << "samma sak men med pekare som endast visar de som borde vara kvar efter remove med pekare" << std::endl;

	for (int* ptr = arrBegin; ptr != arrEnd; ptr++) {
		std::cout << *ptr << std::endl;
	}
}


