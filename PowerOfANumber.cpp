#include<iostream>
#include<math.h>
using namespace std;
int pow1(int a,int v){
    
    int g =  pow(a,v);
    return g;
}
int main(){
    int a,v;
    cin>>a>>v;
    cout<<"Power is : "<<pow1(a,v);
    return 0;
}