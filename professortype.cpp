#include "professortype.h"

ProfessorType::ProfessorType(std::string fName, std::string lName, std::string address, double height, std::string dob, char gender, std::string id, std::string dept, std::string degree) : PersonType(fName, lName, address, height, dob, gender) {
	employeeID = id;
	department = dept;
	this -> degree = degree;
}

bool ProfessorType::equals(ProfessorType otherProf) const {
	return ( PersonType::equals(otherProf) && !(employeeID.compare(otherProf.employeeID) || department.compare(otherProf.department) || degree.compare(otherProf.degree)) );
}

void ProfessorType::print() const {
	PersonType::print();
	std::cout << std::left << std::setw(20) << "ID" << std::right << ":" << std::setw(45) << employeeID << std::endl;
	std::cout << std::left << std::setw(20) << "Department" << std::right << ":" << std::setw(45) << department << std::endl;	
	std::cout << std::left << std::setw(20) << "Degree" << std::right << ":" << std::setw(45) << degree << std::endl;
}

void ProfessorType::setFromCIN() {
	PersonType::setFromCIN();

	std::cout << "ID? ";
	std::getline(std::cin, employeeID);
	std::cout << "Department? ";
	std::getline(std::cin, department);
	std::cout << "Degree? ";
	std::getline(std::cin, degree);
}
