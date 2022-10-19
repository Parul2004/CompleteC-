#include <iostream>
using namespace std;

int main()
{
    int u;
    cin >> u;
    for (int i = 0; i < u; i++)
    {
        int q1;
        cin >> q1;
        int arr1[100];

        for (int i = 0; i < q1; i++)
        {
            cin >> arr1[i];
        }

        int q2;
        cin >> q2;
        int arr2[100];

        for (int i = 0; i < q2; i++)
        {
            cin >> arr2[i];
        }

        for (int i = 0; i < q1; i++)
        {
            for (int j = 0; j < q2; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    cout << arr1[i] << " ";
                    arr2[j] = -1;
                    break;
                }
            }
        }
    }

    return 0;
}