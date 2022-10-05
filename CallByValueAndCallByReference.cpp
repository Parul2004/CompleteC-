#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 4, b = 6;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap1(&a, &b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}