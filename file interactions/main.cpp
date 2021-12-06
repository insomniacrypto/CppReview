// basic interactions with files
// this file is structured to where different function do 
// different actions
// these could all be in main this is for readability

#include <iostream>
#include <fstream>

using namespace std;

// open a file and count all numbers inside
void openAndCount(){
    ifstream ifs("numbers.txt"); // declare and open using parameterized constructor

    // for loop that reads all numbers in the text file
    // and adds them to sum (starting value 0)
    int sum = 0;
    int n;
    while(ifs >> n) {
        sum += n; // add to n
    }

    ifs.close();
    cout << sum << endl;
}

// open and write to a file
void writeToFile(){
    ofstream ofs; // works on writing to the file
    ofs.open("numbers.txt", ios_base::app); // ios_base::app - appends file rather than overwriting all data inside

    for (int i = 1; i <= 10; i++) {
        ofs << i << endl;
    }

    ofs.close(); // you should always close the file after you're done with it
}

int main(){
    writeToFile();
    openAndCount();

    return 0;
}