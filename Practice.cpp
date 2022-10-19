#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int k, int l, int h)
{
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (k == arr[m])
        {
            return m;
            break;
        }
        if (k < arr[m])
        {
             h = m - 1;
        }
        else
        {
           l = m+1;
        }
    }
    return -1;
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
    int k;
    cin >> k;
    int l = 0;
    int h = n - 1;
   int s = BinarySearch(arr,n,k,l,h);
   if (s == -1)
   {
    cout<<"-1\n";
   }
   else{
    cout<<s<<"\n";
   }
   
    return 0;
}