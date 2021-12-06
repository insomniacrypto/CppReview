// goes over basic string operations

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, s2, s3, s4;

    cout << "Enter a lowercase word: ";
    cin >> s;
    cin.ignore(1,'\n');

    // using ascii positions to find the capital letter position
    // .at(x) gets the letter in position x
    s.at(0) = 'A' + (s.at(0) - 'a');

    // easier way to capitalize
    s.at(1) = toupper(s.at(1));

    cout << s << endl;

    // more than one word into a variable
    cout << "Enter a sentence: ";
    getline(cin, s2);
    cout << s2 << endl;

    // s.find('x') returns the position of character x
    s3 = "Hello";
    cout << s3.find('e') << endl;

    // replace(first index, second index, "replacement text")
    // turns s3 into Hola
    s3.replace(1, 4, "ola");

    // strings are mutable
    cout << s + s2 + s3 << endl;

    // using s3 as an example
    cout << s3.size() << endl; // gives size (not indexes) of s3 aka hello returns 5
    bool endDigit = isdigit(s.size() - 1); // checks last index and sees if its a digit (returns true or false)

    // substrings
    // s3 = "hola"
    // get the first index "o" and reads 3 more index
    cout << s3.substr(1, 3) << endl;

    return 0;
}