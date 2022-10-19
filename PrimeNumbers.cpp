#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime;
    for (int i = 2; i < n; i++)
    {
        isPrime = false;
        for (int j = 2; j <= i/2; j++)
        {
           if (i%j == 2)
           {
              isPrime = true;
              break;
           }
           
        }
        
        if (isPrime != true && n != 1)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}