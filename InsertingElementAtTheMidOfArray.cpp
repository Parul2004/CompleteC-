#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of an Array : ";
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nYour array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n At What position : ";
    int pos;
    cin>>pos;
    cout<<"Enter the Element you want to Insert : ";
    int elem;
    cin>>elem;
    for (int i = n; i > pos ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = elem;

   cout<<"\nYour Array becomes : ";
     for (int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}