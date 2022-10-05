#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 18)
    {
        cout << "hello > 18\n";
    }
    else if (n == 18)
    {
        cout << "hello == 18\n";
    }
    else
    {
        cout << "hello < 18\n";
    }

    int k;
    cin >> k;
    switch (k)
    {
    case 1:
        cout << "hello 1\n";
        break;
    case 2:
        cout << "hello 2\n";
        break;
    case 3:
        cout << "hello 3\n";

    default:
        cout << "hello there's nothing\n";
        break;
    }
    return 0;
}