#include "persontype.h"
#include "studenttype.h"
#include "professortype.h"
#include "sort.h"

int main() {
	ProfessorType professors[2];
	StudentType students[2];
	PersonType people[3];

	people[0] = (PersonType());
	people[1] = (PersonType("Terrence", "Stewart"));
	students[0] = (StudentType("John", "Smith", 4.0, "Junior", "390472"));
	students[1] = (StudentType("Joe", "Bill"));
	professors[0] = (ProfessorType("Jill", "Jane"));

	people[0].setfName("Jamee");
	people[0].setlName("Johnson");
	people[0].setAddr("2nd and Tiff St");
	people[0].setHeight(1);
	people[0].setDOB("July 11, 2099");
	people[0].setGender('F');
	
	people[1].setAddr("22222 Wrongly Dr");
	people[1].setHeight(4);
	people[1].setDOB("18/2/1888");
	people[1].setGender('S');

	students[1].setGPA(3);
	students[1].setClassification("Sophomore");
	students[1].setID("28792");

	professors[0].setDegree("PHD");
	professors[0].setDept("Mathematics");
	professors[0].setID("40957");
	professors[0].setAddr("8911 Sit Ln");
	professors[0].setHeight(58);
	professors[0].setDOB("Jan 1, 1970");
	professors[0].setGender('F');

	professors[1] = ProfessorType("Todd", "Doe", "12987 Data Dr", 100, "Nov 22 1973", 'M', "2183974", "Science", "MBA");

	sortByName(people, 3);
	//students[0].setFromCIN();
	//Display people
	for (PersonType &person: people) {
		person.print();
		std::cout << std::endl;
	}

	for (StudentType &student: students) {
		student.print();
		std::cout << std::endl;
	}
	
	for (ProfessorType &professor: professors) {
		professor.print();
		std::cout << std::endl;
	}

	std::cout << "The professors are " << (professors[0].equals(professors[1])?"":"not ") << "the same!" << std::endl;

	return 0;
}
