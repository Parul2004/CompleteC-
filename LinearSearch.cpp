#include <iostream>
using namespace std;
int LinearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    // the worst case time complexity of binary search is O(n);
    // the base case time complexity of binary search is O(1);

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the number you want to Search : \n";
    int k;
    cin >> k;
    if (LinearSearch(arr, n, k))
    {
        cout << k << " is present in given array\n";
    }
    else
    {
        cout << k << " is not present in the array\n";
    }
    return 0;
}