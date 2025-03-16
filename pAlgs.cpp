#include "pAlgs.h"
#include <vector>
#include <iostream>
#include <cctype>

int seqSearch(const std::array<PersonType, 20>& list, std::string target) {
	size_t returnIndex;
	std::vector<size_t> indices;
	std::string choice;
	char choiceChar;
	
	returnIndex = -1;
	for (size_t i = 0; i < list.size(); i++) {
		choice = "";
		choice.append(list[i].getlName());
		choice.append(list[i].getfName());
		if (choice.find(target) != -1)
			indices.push_back(i);
	}

	choice = "N";
	if (indices.size() > 1) {
		std::cout << "Which person would you like to view?" << std::endl;
		std::cin.ignore(65535, '\n');
		for (size_t i = 0; i < indices.size() && toupper(choice[0]) != 'Y'; i++) {
			std::cout << list[indices[i]].getfName() << " " << list[indices[i]].getlName() << std::endl;
			std::cout << "(Y/N)" << std::endl;
			std::getline(std::cin, choice);
			if (toupper(choice[0]) == 'Y')
				returnIndex = indices[i];
		}
	} else if (indices.size() == 1)
		returnIndex = indices[0];

	return returnIndex;
}

size_t tallestPerson(const std::array<PersonType, 20>& list) {
	size_t tallest;

	tallest = 0;
	for (size_t i = 0; i < list.size(); i++) {
		if (list[i].getHeight() > list[tallest].getHeight())
			tallest = i;
	
	}
	return tallest;
}

size_t shortestPerson(const std::array<PersonType, 20>& list) {
	size_t shortest;
	
	shortest = 0;
	for (size_t i = 0; i < list.size(); i++) {
		if (list[i].getHeight() < list[shortest].getHeight())
			shortest = i;
	
	}
	return shortest;
}

void selectionSort(std::array<PersonType, 20>& people) {
	PersonType dummy;
	int smallest;
	for (int i = 0; i < people.size() - 1; i++) {
		smallest = i;
		for (int j = i + 1; j < people.size(); j++) {
			if (people[j].getlName().compare(people[smallest].getlName()) < 0)
				smallest = j;
			else if (people[j].getlName().compare(people[smallest].getlName()) == 0 && people[j].getfName().compare(people[smallest].getfName()) < 0)
					smallest = j;
		}
		dummy = people[i];
		people[i] = people[smallest];
		people[smallest] = dummy;
	}
	return;
}
