#include <iostream>
using namespace std;
void sum()
{
    cout << "Hello parul Sura 😁\n";
}
int main()
{
    /*
 --> 2 Types of variable
1. local variable
2. global variable

Data types

1. Built-in
2. User-defined
3. Derived


1. Built-in

a) int
b) float
c) char
d) double
e) boolean

2. User-defined

a) Struct
b) Union
c) Enum

3. Derived Data Types

a) Array
b) Pointer
c) Funtion

    */

    int g = 1;
    g = 2;
    //    int a = 12;
    //    int d = 54;

    int a = 12, d = 54;
    float e = 3.12;
    bool is_true = false;

    sum();
    cout << "Value of a is " << a << endl;
    cout << "Value of d is " << d << endl;
    cout << "Value of g is " << g << endl;
    cout << "Value of e is " << e << endl;

    cout << "Value of bool is " << is_true << endl;
    return 0;
}