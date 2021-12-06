#ifndef ADDITION_H
#define ADDITION_H

#include <string>
// we do NOT declare namespaces in the header

// initialize the functions
int addEmUp(int x, int y);

class Human {
 public:
  // declarations of the methods
  void walk();

  // getters & setters
  double getAge() const;
  void setAge(int age);

 private:
  // private things are *not* accessible outside of the class
  double age;
};

#endif