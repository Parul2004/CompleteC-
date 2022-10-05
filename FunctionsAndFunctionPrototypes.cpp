#include<iostream>
using namespace std;
int sum(int a,int b){
    int c = a+b;
    return c;
}

void g(){
    cout<<"hello parul sura\n";
}
int main(){
    
    int n1,n2;
    cout<<"enter 1st number\n";
    cin>>n1;
    cout<<"enter 2nd number\n";
    cin>>n2;

    cout<<"the sum is "<<sum(n1,n2)<<"\n";
    
    g();
    return 0;
}