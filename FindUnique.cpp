#include <iostream>
using namespace std;

int main()
{
    int o;
    cin >> o;
    for (int i = 0; i < o; i++)
    {
        int n;
        cin >> n;
        int arr[200];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int arr1[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    c += 1;
                }
            }
            arr1[k] = c;
            k++;
        }
        for (int i = 0; i < k; i++)
        {
            if (arr1[i] == 1)
            {
                cout << "At index : " << i << " and the element is : " << arr[i] << endl;
                break;
            }
        }

     
    }

    return 0;
}