#include <iostream>
using namespace std;

int main()
{

    cout << "I am for Loop\n";
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "I am while loop\n";
    int k = 6;
    while (k <= 10)
    {
        cout << k << " ";
        k++;
    }
    cout << endl;
    int l = 11;
    do
    {
        cout << l << " ";
        l++;
    } while (l <= 20);

    return 0;
}