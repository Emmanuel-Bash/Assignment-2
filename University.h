#ifndef UNIVERSITY_H
#define UNIVERSITY_H

class University {

	std::string name;
  
public:
  University(std::string name, Student *stud)
    : name(name), stud(stud) {}
  University(Student *stud = NULL)
    : University("Strathmore University", stud) {}
	std:: string getname() { return name; }  //!TODO Write a method that yields the name of the
  // university
	std:: string getALLstudents() { return name; } //!TODO Write a method getAllStudents() that prints the
  // Name of the University and all the students at the
  // university

};

#endif