#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       int e = 0,o = 0;
       int n,r;
       cin>>n;
       while (n>0)
       {
          r = n%10;
          if (r%2 == 0)
          {
            e+=r;
          }
          else{
            o+=r;
          }

          n = n/10;
          
       }
       cout<<e<<" "<<o<<endl;
       
    }
    
    return 0;
}