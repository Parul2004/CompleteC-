#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}

int vol(double r,int h){
    return (3.14*r*r*h);
}
int vol(int a){
    return a*a*a;
}
int vol(int l,int b,int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 and 7 is "<<sum(3,6,7)<<endl;

    cout<<"the volume of cubloid is "<<vol(1,2,3)<<endl;
    cout<<"the volume of cube is "<<vol(4)<<endl;
    cout<<"the volume of cylinder is "<<vol(9,5)<<endl;
    return 0;
}