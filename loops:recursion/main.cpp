// again i am using the function structure

#include <iostream>

using namespace std;

// basic for loop
void forLoop(){
    // for (declare a variable, i < 5 (how many times to repeat), i++ (or whatever operation to do after each cycle)){ code }
    for (int i = 1; i <= 5; i++){
        cout << i << endl; // prints 1 - 5
    }
}

// basic while loop
void whileLoop(){
    // while(condition){ code }
    int i = 0;
    while(i < 5){ // prints "hello" 5 times
        cout << "hello" << endl;
        // we must incriment i or i will always be less than 5
        i++;
    }
}

// using Lawton's example of factorial for the recursive loop
int factorial(int n){
    // recursion loops are a bit different - they call themselves multiple times
    // in this you will have to try and follow the math
    if (n == 1){
        return 1; // we are in the base case - program must stop eventually (here) or it will continue forever
    } else {
        // still going since we aren't 1
        return n * factorial(n - 1);
        // for int 5 it does the following
        // n * factorial(n-1) which recalls n * factorial(n-1)
        // until we hit the number 1 in which it returns 1
        // so we do 5 * 4 * 3 * 2 * 1
    }
}

// recursive function to print 1toN
void printFrom1To(int n) {
  if (n == 0) {
    // base case: there are no numbers between 1 and 0 to print!
    return;
  } else {
    // recursive case
    // recursively print from 1 to n-1
    printFrom1To(n-1);
    // print n
    cout << n << endl;
  }
}

int main(){
    forLoop(); // 1 2 3 4 5
    whileLoop(); // hello hello hello hello hello
    cout << factorial(15) << endl; // 2004310016
    printFrom1To(5); 
    return 0;
}