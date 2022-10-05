#include <iostream>
using namespace std;

int main()
{
    cout << "for loop with break statements\n";
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << " ";
    }
    cout << "\n";
    cout << "For loop with continue statements\n";
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
            ;
        }
        cout << i << " ";
    }

    return 0;
}