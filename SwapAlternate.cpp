#include <iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i += 2)
        {
            int t = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = t;
        }

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

    return 0;
}