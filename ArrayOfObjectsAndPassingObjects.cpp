#include<iostream>
using namespace std;
class emp{
 int id;
 int sal;

 public:
 void setId(void){
    sal = 122;
    cout<<"Enter the id of employee"<<endl;
    cin>>id;
 }

 void getId(void){
    cout<<"The id of this employee is "<<id<<endl;
 }

};
int main(){
    
    emp fb[4];
    for (int i = 0; i < 4; i++)
    {
       fb[i].setId();
       fb[i].getId();
    }
    
    return 0;
}