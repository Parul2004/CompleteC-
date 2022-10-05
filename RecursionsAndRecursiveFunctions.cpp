#include <iostream>
using namespace std;

int func(int a)
{
    if (a <= 1)
    {
        return 1;
    }

    return a * func(a - 1);
}

int fib(int a)
{
    if (a <= 2)
    {
        return 1;
    }

    return fib(a - 2) + fib(a - 1);
}
int main()
{
    int n;
    cin >> n;
    int i = func(n);
    cout << "Factorial of number " << n << " is " << i << endl;
    int j = fib(n);
    cout << "Fibnacoi series of number " << n << " is " << j << endl;
    return 0;
}