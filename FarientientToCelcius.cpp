#include<iostream>
using namespace std;

int main(){
    int start,end,stepSize;
    cin>>start>>end>>stepSize;
    for (int i = start; i <= end; i+=stepSize)
    {
        int r = ((i-32)*5)/9;
        cout<<i<<" "<<r<<endl;
    }
    
    return 0;
}