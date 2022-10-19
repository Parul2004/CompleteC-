#include<iostream>
using namespace std;
void insertionSort(int a[],int s){
     for (int i = 1; i < s; i++)
     {
         int k = a[i];
         int j = i-1;

         while (a[j] > k && j>=0)
         {
            a[j+1] = a[j];
            --j;
         }
         a[j+1] = k;

         
     }
     
}

void printArray(int a[],int s){
    for (int i = 0; i < s; i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int d[] = {9,5,1,4,3};
    int s = sizeof(d)/sizeof(d[0]);
    insertionSort(d,s);
    cout<<"Sorted Array in ascending order:\n";
    printArray(d,s);

    return 0;
}