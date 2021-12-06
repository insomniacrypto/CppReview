// basics of throw, aka exceptions
//

#include <iostream>
#include <stdexcept>
using namespace std;


// we want to throw an error if divided by 0
int divide(int dividend, int divisor) {
  if (divisor == 0) {
    throw runtime_error("Division by 0!");
  }

  return dividend / divisor;
}

int main() {
  int dividend, divisor;
  cout << "Enter a dividend: ";
  cin >> dividend;
  cout << "Enter a divisor: ";
  cin >> divisor;

  while (true) {
    try {
        cout << divide(dividend, divisor) << endl;
            break;  
        } catch (runtime_error e) {
            // if we catch the error, what do we do?
            cout << "Enter a new divisor: ";
            cin >> divisor;
        }
    }

  return 0;
}