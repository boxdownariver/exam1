#include "pAlgs.h"

int seqSearch(const std::array<PersonType, 20> list, std::string target) {
	return 0;
}

size_t tallestPerson(const std::array<PersonType, 20> list) {
	size_t tallest;

	for (int i = 0; i < 20; i++) {
		if (list[i].getHeight() > list[tallest].getHeight())
			tallest = i;
	}
	return tallest;
}

size_t shortestPerson(const std::array<PersonType, 20> list) {
size_t tallest;
	for (int i = 0; i < 20; i++) {
		if (list[i].getHeight() < list[tallest].getHeight())
			tallest = i;
	}
	return 0;
}

void selectionSort(std::array<PersonType, 20> people) {
	PersonType dummy;
	int smallest;
	for (int i = 0; i < 19; i++) {
		smallest = i;
		for (int j = i + 1; j < 19; j++) {
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
