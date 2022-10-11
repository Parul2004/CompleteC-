#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Array is : ";
    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    int max1 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
       if (max1 < arr[i])
       {
        max1 = arr[i];
       }

       
    }
    cout<<"Largest Element is : "<<max1<<endl;
    
    
    
    return 0;
}