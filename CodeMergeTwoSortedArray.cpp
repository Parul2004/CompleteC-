#include <iostream>
using namespace std;
void SortingArray(int a[], int g)
{
    for (int i = 1; i < g; i++)
    {
        int k = a[i];
        int j = i - 1;
        while (j >= 0 && k < a[j])
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = k;
    }
};
void printArray(int c[], int h)
{
    for (int i = 0; i < h; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}
int main()
{
    int z;
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int y;
        cin >> y;
        int yrr[y];
        for (int i = 0; i < y; i++)
        {
            cin >> yrr[i];
        }

        int c = n + y;
        int crr[c];

        for (int i = 0; i < n; i++)
        {
            crr[i] = arr[i];
        }
        for (int i = n; i < c; i++)
        {
            crr[i] = yrr[i - n];
        }

        SortingArray(crr, c);
        cout << "Sorting of Array is : \n";
        printArray(crr, c);
        
    }

    return 0;
}