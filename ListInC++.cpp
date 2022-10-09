#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    // empty lenght of 0 lenght
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    cout << "Your List 1 is : ";
    display(list1);

    cout << endl;
    cout << "Your List 2 is : ";
    list<int> list2(3); // empty list of length of 3
    list<int>::iterator it1 = list2.begin();
    *it1 = 45;
    it1++;
    *it1 = 5;
    it1++;
    *it1 = 9;
    it1++;

    display(list2);
    cout << endl;
    cout << "poping element from end in list 2 : ";
    list2.pop_back();
    display(list2);
    cout << endl;
    cout << "poping element from front in list 2 : ";
    list2.pop_front();

    display(list2);

    cout << endl;
    list<int> parul;
    parul.push_back(12);
    parul.push_back(3);
    parul.push_back(13);
    parul.push_back(8);
    parul.push_back(7);
    parul.push_back(12);

    parul.remove(12);
    cout << "Displaying list after removing 12 : ";
    display(parul);
    cout << endl;
    parul.sort();
    cout << "After sorting : ";
    display(parul);

    return 0;
}