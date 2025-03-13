#include "persontype.h"
#include <cctype>

//CONSTRUCTORS- Make objects
PersonType::PersonType() {
	fName = "";
	lName = "";
	address = "";
	height = 0;
	DOB = "";
	gender = 'X';
}

PersonType::PersonType(std::string first, std::string last, std::string add, double height, std::string date, char gen) {
	uberSet(first, last, add, height, date, gen);
}

PersonType::PersonType(std::string first, std::string last) {
	uberSet(first, last, "", 0, "", 'X');
}

PersonType::~PersonType() {
	//std::cout << "Destroying " << fName << std::endl;
}

//SETTERS- Set object data

//Sets all members
void PersonType::uberSet(std::string first, std::string last, std::string add, double height, std::string date, char gen) {
	this->setfName(first);
	this->setlName(last);
	this->setAddr(add);
	this->setHeight(height);
	this->setDOB(date);
	this->setGender(gen);
}

//Sets first name
void PersonType::setfName(std::string first) {
	this->fName = first;
}

//Sets last name
void PersonType::setlName(std::string last) {
	this->lName = last;
}

//Sets address
void PersonType::setAddr(std::string addr) {
	this->address = addr;
}

//Sets height
void PersonType::setHeight(double height) {
	this->height = height;
}

//Sets DOB
void PersonType::setDOB(std::string date) {
	DOB = date;
}

//Sets gender
void PersonType::setGender(char gen) {
	gender = gen;
}

//OUTPUTS- Functions based on object data

//Prints person
void PersonType::print() const {
	std::cout << std::endl;
	std::cout << std::left << std::setw(20) << "First Name"  << std::right << ":" << std::setw(45) << this->fName << std::endl;
	std::cout << std::left << std::setw(20) << "Last Name"  << std::right << ":" << std::setw(45) << this->lName << std::endl;
	std::cout << std::left << std::setw(20) << "Address"  << std::right << ":" << std::setw(45) << this->address << std::endl;
	std::cout << std::left << std::setw(20) << "Height (inches)"  << std::right << ":" << std::setw(45) << this->height << std::endl;
	std::cout << std::left << std::setw(20) << "Date of Birth"  << std::right << ":" << std::setw(45) << this->DOB << std::endl;
	std::cout << std::left << std::setw(20) << "Gender"  << std::right << ":" << std::setw(45) << this->gender << std::endl;
	std::cout << std::endl;
	return;
}

//Returns whether the two people are equal
bool PersonType::equals(const PersonType &otherPerson) const {
	bool isEqual;

	isEqual = (otherPerson.height == this->height) && (otherPerson.gender == this->gender);

	isEqual  = isEqual && !(otherPerson.fName.compare(this->fName));
	isEqual  = isEqual && !(otherPerson.lName.compare(this->lName));
	isEqual  = isEqual && !(otherPerson.address.compare(this->address));
	isEqual  = isEqual && !(otherPerson.DOB.compare(this->DOB));
	
	return isEqual;
}

//Sets person using std::cin
void PersonType::setFromCIN() {
	std::string heightStr;

	std::cout << "First name?";
	//std::getline(std::cin, fName);
	std::cin >> fName;
	std::cout << "Last name?";
	std::getline(std::cin, lName);
	std::cout << "Address?";
	std::getline(std::cin, address);
	std::cout << "Height? (inches)";
	std::getline(std::cin, heightStr);
	if (isdigit(heightStr[0])) 
		height = stod(heightStr);
	 else height = 0;
	std::cout << "Date of birth?";
	std::getline(std::cin, DOB);
	std::cout << "Gender?";
	std::cin.get(gender);
	std::cin.ignore(65536, '\n');
}
