#include<iostream>
using namespace std;
class com{
  int r,i;
  public:
  void get(){
    cout<<"The real part is "<<r<<endl;
    cout<<"The imaginary part is "<<i<<endl;
  }

  void set(int a,int b){
    r = a;
    i = b;
  }
};
int main(){
    com *ptr = new com;
    (*ptr).set(1,54);
    (*ptr).get();


    com *p = new com;
    p->set(45,99);
    p->get();

    // Array of objects

    com *t = new com[4];
    t->set(7,8);
    t->get();

    (t+1)->set(5,6);
    (t+1)->get();

    return 0;
}