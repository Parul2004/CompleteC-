#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your Array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i])
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (max2 < arr[i] && max1 != arr[i])
        {
            max3 = max2;
            max2 = arr[i];
        }
        else
        {
            max3 = arr[i];
        }
    }
    cout << "First Largest Element is : " << max1 << endl;
    cout << "Second Largest Element is : " << max2 << endl;
    cout << "Third Largest Element is : " << max3 << endl;

    return 0;
}