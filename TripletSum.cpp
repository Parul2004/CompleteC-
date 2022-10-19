#include <iostream>
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
    int k;
    cin >> k;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int l = j+1; l < n; l++)
            {
                if (arr[i] + arr[j] + arr[l] == k)
                {
                    c++;
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}