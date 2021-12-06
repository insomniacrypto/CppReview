/* Compiling Command:
g++ -std=c++17 inputs.cpp -o inputs

Running Command:
./inputs
*/
   
#include <iostream>
using namespace std;

int main() {
  int x;
  char c;
  double d;
  string s;

// get user input and assign to x
  cout << "Enter an int: ";
  cin >> x;

  // get user input and assign to c
  cout << "Enter a char: ";
  cin >> c; 

  // get user input and assign to d
  cout << "Enter a double: ";
  cin >> d; 

  // get user input and assign to s
  cout << "Enter a string: ";
  cin >> s; 

  cout << x << endl;
  cout << c << endl;
  cout << d << endl;
  cout << s << endl;

  return 0;
}