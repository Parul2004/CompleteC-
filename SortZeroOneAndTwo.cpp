#include <iostream>
using namespace std;

int main()
{
    int h;
    cin >> h;
    for (int i = 0; i < h; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int z = 0;
        int o = 0;
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                z++;
            }
            else if (arr[i] == 1)
            {
                o++;
            }
            else if (arr[i] == 2)
            {
                t++;
            }
        }
        for (int i = 0; i < z; i++)
        {
            arr[i] = 0;
        }
        for (int i = z; i < z + o; i++)
        {
            arr[i] = 1;
        }

        for (int i = z + o; i < n; i++)
        {
            arr[i] = 2;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout<<endl;
    }

    return 0;
}