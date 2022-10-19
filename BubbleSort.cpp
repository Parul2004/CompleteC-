#include <iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (a[j]>a[j+1])
            {
               int t = a[j];
               a[j] = a[j+1];
               a[j+1] = t;
            }
            
        }
        
    }
};
void printArray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<"\n";
    
}
int main()
{
    int d[] = {-2, 45, 0, 11, -9};
    int s = sizeof(d) / sizeof(d[0]);
    bubbleSort(d, s);
    printArray(d, 6);
    return 0;
}