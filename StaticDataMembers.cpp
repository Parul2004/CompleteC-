#include<iostream>
using namespace std;
class emp{
    int id;
    static int count;
    public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }

    void getData(void){
        cout<<"The id of this employee us "<<id<<" and this is emp number"<<count<<endl;
    }

    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int emp::count;
int main(){
    emp h,l,r;
    h.setData();
    h.getData();
    emp::getCount();

    l.setData();
    l.getData();
    emp::getCount();

    r.setData();
    r.getData();
    emp::getCount();


    return 0;
}