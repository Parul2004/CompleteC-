#include <iostream>
using namespace std;

float mon(float c, float f = 1.04)
{
    return c * f;
};

inline int product(int a,int b){
    return a*b;
}
int main()
{
    int a, b;
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    cout << "the product of a and b is " << product(a, b) << endl;
    int m = 100000;
    cout << "if u have " << m << " rs in ur bank account, u will recive " << mon(m) << "rs after 1 year" << endl;
    cout << "For VIP: if u have " << m << " rs in ur bank account, u will recive " << mon(m, 1.1) << "rs after 1 year" << endl;
    return 0;
}