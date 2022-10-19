#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    int k;
    cin>>k;
    int arr2[n];
    for (int i = k; i < n; i++)
    {
        arr2[i-n] = arr1[i];
    }
    for (int i = k; i < n; i++)
    {
        arr2[k] = arr1[k-i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    
    return 0;
}