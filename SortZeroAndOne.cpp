#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[200];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int z = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            z++;
        }
    }
   
    for (int i = 0; i < z; i++)
    {
        arr[i] = 0;
    }
    for (int i = z; i < n; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}