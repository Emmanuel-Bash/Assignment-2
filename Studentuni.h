#ifndef STUDENTUNI_H
#define STUDENUNI_H

class Student {
  std::string name;
  std::string id;
public:
  Student(std::string name, std::string id) :
    name(name), id(id){}
  std::string getName(){ return name; }
  std::string getid() { return id; }//!TODO Write the getId() method
};

#endif