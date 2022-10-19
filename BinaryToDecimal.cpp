#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    int a = 0, i = 0;
    while (n > 0)
    {
        s = n % 10;
        a = a + (s * pow(2, i));
        n = n / 10;
        i++;
    }
    cout << a << endl;
    return 0;
}