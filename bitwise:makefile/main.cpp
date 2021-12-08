// Small binary review
// 1011 (in binary)
//   1       0       1       1
// 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0
// 8     + 0     + 2     + 1     = 11

// To negate a number, flip all its bits and then add 1
// 1011 becomes 0100 then add 1 -> 0101


// you can store in 32 bits, 32 1 and 0
// you can then store info in the 1 and 0, aka 1 is true 0 is false
// you can store 32 true false statements in one int

// 1 is true 0 is false
// & used for this as well - Boolean and = &
// Bitwise and checks the bit of each numbers lined up and returns the true or false
// remember unless both are 1 (true) it returns 0 (false)
// 1011 = 11
// 0110 = 6
// ----------
// 0010 = 2 - see since the ones from 11 and 6 line up that is true
// that

// this is useful because if i want to see if the 3rd bit (bits read 3210)
// is true I send 1000 and compare. if it comes back 1, it was a 1, and if not it's a 0

// | uses same process but is boolean or, if either bit are 1 it will return a 1 in that pos
// ie
// 1001
// 1101
// ----
// 1101

// ~ (aka the normal !) bitwise not flips all the bits of a number
// ~1001 = 0110

// remember that ints are 32 bits so flipping all of a small number like 9 will
// have a lot of 1s in it (so many the number will most likely be negative)

// xor ^ (exclusive or) returns true only when ONE of them is true
// 1011
// 0101
// ----
// 1110


// shifting << left
// nx2^i
// 1011 << 2 == 11
// = 101100 == 44 (11 x 2^2)
// 0011 << 1 == 3
// 00110 == 6 (3 x 2^1)

// shifting >> right
// n/2^i
// when shifting right on ints, it will bring in a 0 if pos or a 1 if neg
// on unsigned ints it always brings in a 0
// 00000101 >> 1
// 00000010

#include <iostream>

using namespace std;

// this negates int x using ~ and +
int negate_2s_complement(int x){
    return(~x) + 1; // remember from line 7 - flip all bits and add 1 to negate a number
}

int main(){
    cout << negate_2s_complement(100) << endl;
    cout << negate_2s_complement(-500) << endl;
    return 0;
}