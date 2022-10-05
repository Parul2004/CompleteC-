#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const int a = 56;
    cout<<a<<endl;
    // a = 12;
    // cout<<a<<endl;

    // manipulators

    int z = 1,n = 92,m = 7234;
    cout<<"Without setw \n";
    cout<<z<<endl<<n<<endl<<m<<endl;
    cout<<"With setw\n";
    cout<<setw(4)<<z<<endl<<setw(4)<<n<<endl<<setw(4)<<m<<endl;

    cout<<"Operator Precedence\n";
    int f = 2,h = 6;
    int l = ((((f*5)+h)-45)+89);
    cout<<l<<endl;
    return 0;
}