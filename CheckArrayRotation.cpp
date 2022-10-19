#include <iostream>
using namespace std;
int Arr1(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return i + 1;
        }
        
    }
    return 0;
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<Arr1(arr, n)<<"\n";

    return 0;
}