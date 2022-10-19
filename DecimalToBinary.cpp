#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[200], i = 0;
    if (n == 0)
    {
        cout << '0' << endl;
    }
    else
    {
        while (n > 0)
        {
            a[i] = n % 2;
            n = n / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout<<a[j];
        }
    }

    return 0;
}