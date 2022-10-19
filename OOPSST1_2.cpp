#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n>=1 && n<= 9)
    {
        cout<<15400*n;
    }
    else if(n>=10 && n<= 19){
        cout<<15400*n - (0.2*15400*n);
    }
    else if(n>=20 && n<=49){
        cout<<15400*n-(0.3*15400*n);
    }
    else if(n>=50 && n<=99){
        cout<<15400*n-(0.4*15400*n);
    }
    else{
         cout<<15400*n-(0.5*15400*n);
    }
    
    return 0;
}