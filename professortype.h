#ifndef PROF_H
#define PROF_H
#include "persontype.h"

class ProfessorType : public PersonType {
	private:
		std::string employeeID;
		std::string department;
		std::string degree;
	public:
		inline ProfessorType() {}
		inline ProfessorType(std::string fName, std::string lName) : PersonType(fName, lName) {}
		ProfessorType(std::string fName, std::string lName, std::string address, double height, std::string dob, char gender, std::string id, std::string dept, std::string degree);
		
		inline std::string getEmployeeID() const { return employeeID; }
		inline std::string getDept() const { return department; }
		inline std::string getDegree() const { return degree; }

		inline void setID(std::string id) { employeeID = id; return; }
		inline void setDept(std::string dept) { department = dept; return; }
		inline void setDegree(std::string deg) { degree = deg; return; }
		void setFromCIN();

		bool equals(ProfessorType) const;
		void print() const;
};

#endif
