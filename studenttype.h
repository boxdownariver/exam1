#ifndef STUDENT_H
#define STUDENT_H
#include "persontype.h"

class StudentType: public PersonType {
	private:
		std::string id;
		double gpa;
		std::string classification;

	public:
		StudentType() : PersonType() {id = ""; gpa = 0.0; classification = "";}
		StudentType(std::string fName, std::string lName) : PersonType(fName, lName) {};
		StudentType(std::string fName, std::string lName, double GPA, 
				std::string classification, std::string id);

		inline void setGPA(double GPA) { gpa = GPA; return; }
		inline void setID(std::string ident) { id = ident; return; };
		inline void setClassification(std::string classif) { classification = classif; return; }
		void setFromCIN();

		inline double getGPA() const { return gpa; }
		inline std::string getID() const { return id; }
		inline std::string getClassification() const { return classification; }

		void print() const;
		bool equals(const StudentType &otherStudent) const;
		inline bool idEqualCheck(std::string otherID) const { return !((bool)id.compare(otherID)); }

};
#endif
