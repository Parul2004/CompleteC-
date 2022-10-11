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

    int mini1 = INT_MAX;
    int mini2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (mini1 > arr[i])
        {
            mini1 = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (mini1 != arr[i] && mini2 > arr[i])
        {
            mini2 = arr[i];
        }
    }

    cout << "Second Smallest Element is : " << mini2 << endl;
    return 0;
}