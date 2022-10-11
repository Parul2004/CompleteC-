#include <iostream>
using namespace std;

int main()
{
    int arr[10], found = 0, i, j, elem;
    int tot;
    cout << "Enter the number of elements : ";
    cin >> tot;
    for (int i = 0; i < tot; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter Element to delete : ";
    cin >> elem;
    for (int i = 0; i < tot; i++)
    {
        if (arr[i] == elem)
        {
            for (int j = i; j < (tot - 1); j++)
            {
                arr[j] = arr[j + 1];
            }
            found++;
            i--;
            tot--;
        }
    }

    if (found == 0)
    {
        cout << "\nElement doesn't found in the Array !\n";
    }
    else
    {
        cout << "\nElement delete from the Array Successfully !\n";
    }

    cout << "Your Array will be : ";
    for (int i = 0; i < tot; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}