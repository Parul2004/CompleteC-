#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int s;
    cin >> s;
    int sum = 0;
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        product *= i;
    }
    if (s == 1)
    {
        
        cout << sum << endl;
    }
    else if (s == 2)
    {
        cout << product << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}