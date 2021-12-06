/* Compiling command:
g++ -std=c++17 basicMath.cpp -o basicMath

Running Command:
./basicMath
*/

#include <iostream>
#include <cstdlib> // for abs
#include <cmath> // for exp
#include <iomanip> // for setprecision

using namespace std;

int main(){
    int a = 5;
    int b = 10;

    // addition
    int c = a + b; // 15

    // subtraction
    int d = b - a; // 5
    
    // multiplication
    int e = b * a; // 50

    // division (watch out for integer division)
    int f = b / a; // 2

    // calculate circle of radius 5 (pi * r * r)
    double g = 3.14 * 5 * 5; // 78.5

    // absolute value of a number
    int h = abs(-42); // 42 now
    double h2 = abs(-43.54); // abs is used for floating point values

    // e raised to the power of x
    double i = exp(5);

    // ceil rounds up always
    // floor rounds down always
    double j = 5.5555;
    int k = ceil(j); // 6
    int l = floor(j); // 5
    int m = round(j); // 6
    cout << fixed << setprecision(2) << j << endl; // 5.56 - setprecision says show 2 numbers and fixed tells setprecision to only affect after the decminal point
    // aka without fixed its 5.6

    return 0;
}
