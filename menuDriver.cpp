#include "menuDriver.h"
#include <cctype>

int main() {
	menuDriver();
	return 0;
}

int menu() {
	std::string choice;
	int choiceInt;

	do {
		if (choice[0] > '5' || choice[0] < '1') 
			std::cout << "Only 1-5 allowed." << std::endl;

		std::cout << "<1> Search for a person" << std::endl;
		std::cout << "<2> Tallest person" << std::endl;
		std::cout << "<3> Shortest person" << std::endl;
		std::cout << "<4> Print by Name" << std::endl;
		std::cout << "<5> Quit" << std::endl;

		std::cin >> choice;
	} while (choice[0] > '5' || choice[0] < '1');

	if (isdigit(choice[0])) 
		choiceInt = std::stod(&choice[0]);
	else choiceInt = 0;
	return choiceInt;
}

void menuDriver() {
	std::array<PersonType, 20> people;
	std::string target;
	int menuItem;
	int result;

	for (int i = 0; i < 20; i++) {
		people[i].setFromCIN();
	}
	system("clear");
	do {
		menuItem = menu();

		switch (menuItem) {
			case 1:
				//seqSearch
				std::cout << "Please enter a person to search for:\t";
				std::cin >> target;
				result = seqSearch(people, target);

								break;
			case 2:
				//tallestPerson
				std::cout << "Finding the tallest person..." << std::endl;
				result = tallestPerson(people);
				break;
			case 3:
				//shortestPerson
				std::cout << "Finding the shortest person..." << std::endl;
				result = shortestPerson(people);
				break;
			case 4:
				//printByName
				std::cout << "Sorting..." << std::endl;
			       	selectionSort(people);
				
				for (int i = 0; i < 20; i++) {
					people[i].print();
				}	
				break;
			default:
				break;
		}
		if (result != -1 && menuItem < 5 && menuItem > 0) 
			people[result].print();
		std::cout << "Press enter to continue..." << std::endl;
		std::getline(std::cin, target);
		system("clear");
	} while (menuItem != 5);
}
