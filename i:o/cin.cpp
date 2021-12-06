#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2;

    cout << "Enter a word: ";
    // sets whatever the cin value is to variable s1 - expecting a string
    cin >> s1;
    // since we aren't using getline we need to add cin.ignore or whatever
    // cin we do after this will get the newline added and you won't
    // get to type
    cin.ignore(1,'\n');

    // here we use getline because we want the whole line, not just the first word
    cout << "Enter a sentence: ";
    getline(cin, s2);
    cout << s2 << endl;

    return 0;
}