#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{

    vector<int> v1;
    int e, s;
    cout << "Enter size of your vector" << endl;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        cin >> e;
        v1.push_back(e);
    }
    cout << "Your Array is : ";
    display(v1);

    cout << "After popping of an element : ";
    v1.pop_back();
    display(v1);

    vector<int>::iterator it = v1.begin();
    display(v1);
    // vector<int>::iterator iter = v1.begin();
    v1.insert(it,32);
    cout<<"After Inserting value 32 : ";
    display(v1);

    // zero length integer vector
    vector<int>vec1;

    // 4-element charchter vector
    vector<char>vec2(4);

    // 4-element character vector from vector 2
    vector<char>vec3(vec2);

    // 6-element vector of 3s
    vector<int>vec4(6,3);
    return 0;
}