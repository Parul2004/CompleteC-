#include<iostream>
using namespace std;
int c = 1101;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"Enter the value of c: "<<endl;
    c = a+b;
    cout<<"The sum is "<<c<<endl;

    // scope resolution is ::
    cout<<"The global c is "<<::c<<endl;

    float d = 31.23F;
    long double t = 31.23L;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // Reference Variables
    float x = 455;
    float &p = x;

    x = 56.66;
    cout<<x<<endl;
    cout<<p<<endl;


    int y = 3;
    float j = 6.7;

    cout<<"value of y is "<<float(y)<<endl;
    cout<<"value of y is "<<(float)y<<endl;

    cout<<"value of j is "<<int(j)<<endl;
    cout<<"value of j is "<<(int)j<<endl;

    cout<<"The expression is "<<y+j<<endl;
    cout<<"The expression is "<<y+int(j)<<endl;
    cout<<"The expression is "<<y+(int)j<<endl;

    return 0;
}