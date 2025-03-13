#ifndef string_hpp
#define string_hpp
#include <string>
#endif

#ifndef cout_hpp
#define cout_hpp
#include <iostream>
#include <iomanip>
#endif

#ifndef persontype_h
#define persontype_h

class PersonType {
	private:
		std::string fName;
		std::string lName;
		std::string address;
		double height;
		std::string DOB;
		char gender;
	public:
		void uberSet(std::string first, std::string last, std::string add, double height, std::string date, char gen);
		void setfName(std::string first);
		void setlName(std::string last);
		void setAddr(std::string addr);
		void setHeight(double height);
		void setDOB(std::string date);
		void setGender(char gen);
		void setFromCIN();

		void uberGet(std::string &first, std::string &last, std::string &add, double &height, std::string &date, char &gen) const;
		void getfName(std::string &first) const;
		void getlName(std::string &last) const;
		void getAddr(std::string &addr) const;
		void getHeight(double &height) const;
		void getDOB(std::string &date) const;
		void getGender(char &gen) const;

		inline std::string getfName() const { return fName; }
		inline std::string getlName() const { return lName; }
		inline std::string getAddr() const { return address; }
		inline double getHeight() const { return height; }
		inline std::string getDOB() const {return DOB; }
		inline char getGender() const {return gender; }
		
		void print() const;
		bool equals(const PersonType &otherPerson) const;

		PersonType();
		PersonType(std::string first, std::string last);
		PersonType(std::string first, std::string last, std::string addr,
			       double height, std::string DOB, char gender);
		~PersonType();
};

#endif
