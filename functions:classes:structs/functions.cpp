// basics of functions and their abilities

#include <iostream>
#include <string>

using namespace std;

// just like a variable, we must declare what return value a function will have
// use "void" if the function will not return a value

// i can declare the functions just like variables before i use them
int factorial(int x);

// basic assert true function to test your programs
void assertTrue(bool b, string description) {
  if (b) { // if the statement you passed is true
    cout << "PASSED: " << description << endl;
  } else { // if the statement is something other than true (false)
    cout << "FAILED: " << description << endl;
  }
}

// void example
void hello(){
    cout << "hello" << endl;
}

// if dealing with integers use this one
int add(const int x, const int y){
    return x + y; // gives back the value x + y
}

// if dealing with strings use this one
string add(const string x, const string y){
    return x + y; // gives back the value x + y
}

// int& x means we want to pass and change x, not just access it
void increment_by_reference(int& x) {
  x++;
}

// main function
int main(){
    int a = 5, b = 6;
    string str = "Hello, ", str2 = "World!";

    cout << add(a, b) << endl; // 11
    cout << add(str, str2) << endl; // Hello, World!

    assertTrue(factorial(4) == 24, "4!"); // PASSED: 41
    hello(); // hello

    int x = 12;
    increment_by_reference(x);
    cout << x << endl; // 13

    return 0;
}

// since we declared factorial in the beginning of our file
// we can assign the functions commands here
int factorial(int x) {
    // if x is negative return -1
    if (x < 0) {
        return -1; // return early!
    }

    // otherwise let's set product to 1
    // and loop for the amount of times we want to
    // aka the x we passed to factorial
    // since product is in a function it is local - cannot be accessed outside of factorial
    int product = 1;
    for (int i = 1; i <= x; i++) {
        product = product * i;
    }

    // return the number we can up with
    return product;
}