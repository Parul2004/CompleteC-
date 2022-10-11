#include <iostream>
using namespace std;
int MostOccuring(int arr[], int n)
{
    int maxCount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (maxCount < count)
        {
            maxCount = count;
            element_having_max_freq = arr[i];
        }
    }
    return element_having_max_freq;
}
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
    cout << endl;
    cout <<"Most Occurring Element is : " <<MostOccuring(arr, n);

    return 0;
}