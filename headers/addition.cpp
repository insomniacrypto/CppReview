#include "addition.h" // customary
#include <iostream>

using namespace std;

// basic function
int addEmUp(int x, int y){
    return x + y;
}

// adding the class functions declared in .h file
// must do
// type class::function(parameters){ code }
void Human::walk(){
    // we did not specify a namespace so including the std::
    cout << "Walking..." << endl;
}

double Human::getAge() const{
    cout << age << endl;
    return age;
}

void Human::setAge(int x){
    age = x;
}