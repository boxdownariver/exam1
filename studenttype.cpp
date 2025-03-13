#include "studenttype.h"
#include <cctype>

void StudentType::print() const {
	PersonType::print();
	std::cout << std::left << std::setw(20) << "GPA" << std::right << ":" << std::setw(45) << gpa << std::endl;
	std::cout << std::left << std::setw(20) << "ID" << std::right << ":" << std::setw(45) << getID() << std::endl;
	std::cout << std::left << std::setw(20) << "Classification" << std::right << ":" << std::setw(45) << classification << std::endl;
}

StudentType::StudentType(std::string fName, std::string lName, double GPA, std::string classification, std::string id) : PersonType(fName, lName) {
	this->id = id;
	this->classification = classification;
	gpa = GPA;
}

bool StudentType::equals(const StudentType &otherStudent) const {
	return (PersonType::equals(otherStudent) && gpa == otherStudent.gpa && !(id.compare(otherStudent.id) || classification.compare(otherStudent.classification)));
}

void StudentType::setFromCIN() {
	PersonType::setFromCIN();
	
	std::string gpaStr;

	std::cout << "GPA? ";
	std::getline(std::cin, gpaStr);
	if (isdigit(gpaStr[0])) 
		gpa = stod(gpaStr);
	else gpa = 0;
	std::cout << "ID? ";
	std::getline(std::cin, id);
	std::cout << "Classification? ";
	std::getline(std::cin, classification);
}
