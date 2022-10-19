#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int te = *a;
    *a = *b;
    *b = te;
}

void printArray(int arr[],int s){
    for(int i = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[mini] > a[j])
            {
                mini = j;
            }
        }
        swap(&a[mini], &a[i]);
    }
}
int main()
{
    int data[] = {20, 12, 10, 15, 2};
    int s = sizeof(data) / sizeof(data[0]);
    selectionSort(data, s);
    cout << "Sorted array in Acsending Order:\n";
    printArray(data, s);
    return 0;
}