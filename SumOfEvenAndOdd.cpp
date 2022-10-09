#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       string str;
       cin>>str;
       int even_count = 0,odd_count = 0;
       for (int i = 0; i < str.length(); i++)
       {
        if (str.at(i) % 2 == 0)
        {
           even_count+=str.at(i);
        }
        else if(str.at(i) % 2 != 0){
            odd_count+=str.at(i);
        }
        
       }

       cout<<even_count<<" "<<odd_count<<endl;
       
    }
    
    return 0;
}