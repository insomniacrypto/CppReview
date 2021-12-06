/* Compiling command:
g++ -std=c++17 variablesBasic.cpp -o variables

Running Command:
./variables
*/

/* Different ways to store/intiialize variables and their meanings
ints store integers (whole numbers), without decimals, such as 123 or -123
doubles store floating point numbers, aka numbers with decimals such as 19.99 or -19.99
chars store a single character such as 'a' or 'B', always uses single quotes ' '
strings store text like "Hello world", always uses double quotes " "
*/

// Required to use strings
#include <string>
#include <vector>
#include <algorithm>


// Allows us to not need to use std::string in this file
using namespace std;

int main(){
    // can define variables in one of 4 main ways
    int init; // just initialize (assigned random number)
    int assign = 5; // initialize and assign original value
    int var1, var2, var3; // initialize multiple
    int var4 = 45, var5 = 29, var6 = 37; // intislize and assign multiple variables

    // integers (ints), no decimals
    int a;
    a = 0;
    
    int b = 0;

    // doubles, decimals
    double c;
    c = 19.99;

    double d = -19.99;

    // chars, single letters
    char e;
    e = 'a';

    char f = 'B';

    // strings, words
    string g;
    g = "Hello";
    string h = "World";


    // booleans (bool), true or false
    bool i;
    i = true;

    bool j = false;
    bool ij = 42 > 43; // false

    // const variables are variables that will not change
    const int k = 5;
    // i cannot do k++ or k = k + 5 now. the value is static

    // unsigned means that the value is a non-negative int always
    unsigned const int l = 10;

    // array basics
    int arr[5] = {1, 2, 3, 4, 5}; // create an array of size 5
    arr[0] = 5; // arr is now 5, 2, 3, 4, 5

    int arr2[3][3]; // multi dimensional array ([1][1], [1][2], [1][3], [2][1], etc)
    arr2[2][1] = 5; // set value of array multidimension

    int arr3[] = {1, 7, 9, 12, 4, 6};
    sort(arr3, arr3 + 6);  // sort arr3 + 6 is for arr3 6 numbers

    // vector basics
    vector<int> v = {5, 9, 2, 0, 7}; // make a vector v
    sort(v.begin(), v.end()); // sort v
    int w = v.at(0); // 5
    v.push_back(8); // v hold 5 9 2 0 7 8


    return 0;
}