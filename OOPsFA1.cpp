#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr1[i] = (arr[i])%50;
        

    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    

   


    
    return 0;
}