/* Compile With
g++ -std=c++17 addition.cpp main.cpp -o main

Run using
./main
*/

#include <iostream>
#include "addition.h" // use quotes for .h files (headers)

using namespace std;

int main() { 
    // variables
    int x = 10, y = 20;

    // addEmUp declared in header file (addition.h) and assigned in respective cpp file (addition.cpp)
    cout << addEmUp(x, y) << endl; // 30

    // class in header
    Human john;
    john.setAge(34);
    john.getAge(); // 34
    john.setAge(99);
    john.getAge(); // 99
}