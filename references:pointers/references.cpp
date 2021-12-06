// pulled directly from Lawtons Github - amended
// references, when used in functions, manipulate the referenced variable
// see the function created below, but not used

#include <iostream>
using namespace std;

void add(int& y){
    y++;
    // it does not return anything it just adds to y
    // since we are referencing the actual y variable passed
    // it will change y variables value
    // this would NOT work if we passed "const int& y"
}

int main() {
    int y = 42;
    int& x = y; // x is a ref to y (aka an alias)

    y++; // increments y
    x++; // refers to y so increments y

    cout << y << endl; // 44
    cout << x << endl; // 44

    x = 45; // refers to y so sets y to 45

    cout << y << endl; // 45
    cout << x << endl; // 45

    y = 47; // set y to 47

    cout << y << endl; // 47
    cout << x << endl; // 47

    add(y);
    add(x);

    cout << y << endl; // 49
    cout << x << endl; // 49

    return 0;
}