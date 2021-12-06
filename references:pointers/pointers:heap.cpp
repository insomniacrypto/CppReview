// pointers are complicated concept read all comments
// * in variable type (int*) means pointer to
// * other than in a variable type means dereference
// &x means address of

#include <iostream>
#include <string>

using namespace std;

// must pass a pointer value
void addOne(int* a) {
    *a = *a + 1;
}

// returns pointer int
int* foo(){
    // new heap int
    int* n = new int;
    // set val of new heap int
    *n = 42;
    cout << *n << endl;
    // return it
    return n;
}

int main(){
    int* p; // create a pointer (mind you assigned random value)
    int* z = nullptr; // sets pointer to address 0

    int a = 5;

    p = &a; // p hold a's address

    cout << *p << endl; // 5 - *p will pull the value from the address it holds
    cout << p << endl; // 0x16fb578ac - this will change but it will be some hex value

    *p = *p + 1; // a = 6 now

    cout << *p << endl; // 6
    cout << a << endl; // 6

    addOne(&a); // since we are using pointers we need to dereference a
    cout << a << endl; // 7
    cout << *p << endl; // 7

    int** r = &p; // using ** because we are a pointer, pointing to type int* (aka pointer)
    cout << **r << endl; // 7

    int*** s = &r; // pointer pointing to a pointer pointing to a pointer (aka pointing to a int**)
    cout << ***s << endl; // 7

    string aa = "four";
    string* ab = &aa;

    // ab.size(); will NOT work
    cout << (*ab).size() << endl; // 4 - get size of the pointer when dereferenced to string aa
    cout << ab -> size() << endl; // 4 - combo of deref & dot

    // arrays are just pointers to first values
    int arr[] = {1, 2, 3};
    cout << arr << endl; // address in memory (hex value)
    cout << *arr << endl; // 1

    cout << (arr+1) << endl; // addr of arr[1]
    cout << &arr[1] << endl; // addr of arr[1]
    cout << *(arr+1) << endl; // value of arr[1]
    cout << arr[1] << endl; // value of arr[1]

    // heap operations
    // heap is memory we can dynamically allocate (such as being able to make or delete them)
    int* num = new int; // set new int on the heap
    *num = 42; // sets num to 42
    delete n; // reclaims heap memory

    int* num2 = foo(); // gets n from foo
    cout << num2 << endl;
    delete num2; // reclaims the heap memory from num2/foo's n is/was pointing to

    return 0;
}