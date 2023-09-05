#include "Uppgift1.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <numeric>
#include <algorithm>
#include <array>




void Uppgift1::SortHeltalVector()
{
	std::cout << "1a: Sortering med vector heltal" << std::endl;

	std::vector<int> intVector(20);
	int size = intVector.size();

	//gives the vector randommized nr
	for (int i = 0; i < size; i++) 
	{
		int r = rand();
		intVector[i] = r;
	}

	//prints out all the elements
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (intVector[i] != NULL) {
			std::cout << intVector[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}
	std::cout << "---------------------------" << std::endl;

	//sorts the vector
	std::sort(intVector.begin(), intVector.end());

	//prints all elements out
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (intVector[i] != NULL) {
			std::cout << intVector[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;
}

void Uppgift1::SortHeltalInt()
{
	std::cout << "\n1b: Sortering med int heltal" << std::endl;

	int arr[20];
	int size = sizeof(arr)/sizeof(arr[0]);

	//inserting random nr into array
	for (int i = 0; i < size; i++)
	{
		int r = rand();
		arr[i] = r;
	}

	//printing it out
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (arr[i] != NULL) {
			std::cout << arr[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;

	//sorting int array with std::sort
	std::sort(arr, arr + size);

	//printing it out
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (arr[i] != NULL) {
			std::cout << arr[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;
}


void Uppgift1::SortHeltalVectorNer()
{
	std::cout << "1c: Sortering med vector heltal sjunkande ord" << std::endl;

	std::vector<int> intVector(20);
	int size = intVector.size();

	//gives the vector randommized nr
	for (int i = 0; i < size; i++)
	{
		int r = rand();
		intVector[i] = r;
	}

	//prints out all the elements
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (intVector[i] != NULL) {
			std::cout << intVector[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}
	std::cout << "---------------------------" << std::endl;

	//sorts the vector
	std::sort(intVector.rbegin(), intVector.rend());

	//sort the vector with greater
	//std::sort(intVector.begin(), intVector.end(), std::greater<int>());

	//prints all elements out
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (intVector[i] != NULL) {
			std::cout << intVector[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;
}

void Uppgift1::SortHeltalIntNer()
{
	std::cout << "\n1d: Sortering med array heltal i sjunkande ordning" << std::endl;

	int arr[20];
	int size = sizeof(arr) / sizeof(arr[0]);

	//inserting random nr into array
	for (int i = 0; i < size; i++)
	{
		int r = rand();
		arr[i] = r;
	}

	//printing it out
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (arr[i] != NULL) {
			std::cout << arr[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;

	//sorting int array with std::sort
	std::sort(arr, arr + size, std::greater<int>());

	//printing it out
	for (int i = 0; i < size; i++)
	{
		std::cout << i << ": ";
		if (arr[i] != NULL) {
			std::cout << arr[i] << std::endl;
		}
		else
		{
			std::cout << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;
}