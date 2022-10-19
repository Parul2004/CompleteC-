#include <iostream>
using namespace std;

int main()
{
    int p = 1;
    int n;
    cin >> n;
    int count1 = 0;
    while (count1 != n)
    {
        int r = 3 * p + 2;
        if (r % 4 != 0)
        {
            cout << r << " ";
            count1++;
        }
        p++;
    }

    return 0;
}