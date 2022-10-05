#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int);
    complex(complex, complex);

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }

    // void printSum(complex o1, complex o2)
    // {
    //     a = o1.a + o2.a;
    //     b = o1.b + o2.b;
    // }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}
complex::complex(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
int main()
{

    // Implicit call
    complex a(4, 5);
    a.printNumber();

    // Explicit call

    complex b = complex(5, 7);
    b.printNumber();

    complex c(a, b);
    c.printNumber();

    return 0;
}