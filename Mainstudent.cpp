#include <iostream>
#include <string>
#include "Student.h"

int main() {

	struct student stud;

// you must press enter for every value

	std::cout << "what is the students name & ID:";
	std::cin >> stud.name >> stud.id;
	std::cout << "Grades : Assignments, Midterms, Fin";
	std::cin >> stud.assig >> stud.midt >> stud.fin;
// Print out the results
	std::cout << "Name:" << stud.name << std::endl
			  << "Student ID:" << stud.id << std::endl
			  << "Gardes:" << (stud.midt + stud.fin + stud.assig) << std::endl;

			  
}