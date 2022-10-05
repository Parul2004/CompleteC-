#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int *ptr = &a;

    cout << "The value of a is " << (*ptr) << endl;

    float *p = new float(34.56);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout << *arr << endl
         << *(arr + 1) << endl
         << *(arr + 2) << endl;
    return 0;
}