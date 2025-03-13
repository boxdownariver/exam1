#include "sort.h"

void sortByName(PersonType people[], int size) {
	PersonType dummy;
	int smallest;
	for (int i = 0; i < size; i++) {
		smallest = i;
		for (int j = i; j < size; j++) {
			if (people[j].getfName().compare(people[smallest].getfName()) < 0)
				smallest = j;
		}
		dummy = people[i];
		people[i] = people[smallest];
		people[smallest] = dummy;
	}
}

void sortByHeight(PersonType people[], int size) {
	PersonType dummy;
	int smallest;
	for (int i = 0; i < size; i++) {
		smallest = i;
		for (int j = i; j < size; j++) {
			if (people[j].getHeight() < people[smallest].getHeight())
				smallest = j;
		}
		dummy = people[i];
		people[i] = people[smallest];
		people[smallest] = dummy;
	}
}

void sortByID(StudentType people[], int size) {
	StudentType dummy;
	int smallest;
	for (int i = 0; i < size; i++) {
		smallest = i;
		for (int j = i; j < size; j++) {
			if (people[j].getID().compare(people[smallest].getID()) < 0)
				smallest = j;
		}
		dummy = people[i];
		people[i] = people[smallest];
		people[smallest] = dummy;
	}
}

void sortByID(ProfessorType people[], int size) {
	ProfessorType dummy;
	int smallest;
	for (int i = 0; i < size; i++) {
		smallest = i;
		for (int j = i; j < size; j++) {
			if (people[j].getEmployeeID().compare(people[smallest].getEmployeeID()) < 0)
				smallest = j;
		}
		dummy = people[i];
		people[i] = people[smallest];
		people[smallest] = dummy;
	}
}
