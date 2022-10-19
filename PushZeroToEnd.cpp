#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int arr1[n];
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr1[y] = arr[i];
                y++;
            }
        }

        for (int i = y; i < n; i++)
        {
            arr1[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        cout<<endl;
    }

    return 0;
}