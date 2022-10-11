#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the size of your Array : ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your Array is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int elem;
    cout << "Enter Element you want to Insert : ";
    cin >> elem;

    arr[i] = elem;
    cout << "\n";
    cout << "Your New Array is : ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}