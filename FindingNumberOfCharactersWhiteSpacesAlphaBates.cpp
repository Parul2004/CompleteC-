#include <iostream>
using namespace std;
void Count(string str){
      int u = 0,l = 0,n = 0, s = 0;
      for (int i = 0; i < str.length(); i++)
      {
        if (str[i] >= 'A' && str[i] <='Z')
        {
           u++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            l++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            n++;
        }
        else{
            s++;
        }

        
        
      }
      cout<<"Upper case letters : "<<u<<endl;
        cout<<"Lower case letters : "<<l<<endl;
        cout<<"Numbers : "<<n<<endl;
        cout<<"Special characters : "<<s<<endl;
};
int main()
{

    string str = "#Geeks01 fOr@gE Eks07";
    Count(str);
    return 0;
}