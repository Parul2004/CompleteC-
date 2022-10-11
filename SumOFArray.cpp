#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Your array is : ";
    int s = 0;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
       s+=arr[i];
    }

    cout<<"\nSum of Array is : "<<s<<endl;

    
    
    return 0;
}