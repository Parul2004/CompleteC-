#include<iostream>
#include<algorithm>
using namespace std;
void KLargest(int arr[],int n,int k){
    sort(arr,arr+n,greater<int>());
    cout<<"\nLargest "<<k<<" Elements : ";
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<"Your array is : ";
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    KLargest(arr,n,k);
    
    return 0;
}