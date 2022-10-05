#include <iostream>

// there are 2 types of header files:
// 1. System header files: it comes with the compier
// 2. user defined header files: it is written by programmer
#include "this.h"
using namespace std;

int main()
{

    // operators in C++

    int a = 2, b = 5;
    cout << "Operators in C++ : " << endl;

    cout << "Following are the types of operators in C++\n";

    // Arithematic operators
    cout << "The value of a+b is " << a + b << endl;
    cout << "The value of a-b is " << a - b << endl;
    cout << "The value of a*b is " << a * b << endl;
    cout << "The value of a/b is " << a / b << endl;
    cout << "The value of a%b is " << a % b << endl;

    // post operator
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    // pre operator
    cout << "The value of --a is " << --a << endl;
    cout << "The value of ++a is " << ++a << endl;

    // comparsion operator

    cout << "Following are the comparsion operators in C++" << endl;
    cout << "The value of  a == b is " << (a == b) << endl;
    cout << "The value of  a != b is " << (a != b) << endl;
    cout << "The value of  a <= b is " << (a <= b) << endl;
    cout << "The value of  a >= b is " << (a >= b) << endl;
    cout << "The value of  a > b is " << (a > b) << endl;
    cout << "The value of  a < b is " << (a < b) << endl;

    // logical operators

    cout << "following are the logical operators\n";
    cout << "the value of logical and operator (a==b) && (a<b) is : " << ((a == b) && (a < b)) << endl;
    cout << "the value of logical and operator (a==b) || (a<b) is : " << ((a == b) || (a < b)) << endl;
    cout << "the value of logical and operator (!(a==b)) is : " << (!(a == b)) << endl;
    return 0;
}