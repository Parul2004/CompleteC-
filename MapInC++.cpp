#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main()
{

    // Map is an associative array
    map<string, int> marksMap;
    marksMap["a"] = 1;
    marksMap["b"] = 2;
    marksMap["c"] = 3;
    marksMap["d"] = 4;
    marksMap["e"] = 5;
    cout << "STL Map is : \n";
    map<string, int>::iterator it;
    for (it = marksMap.begin(); it != marksMap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    marksMap.insert({{"r", 45}, {"l", 12}, {"y", 6}, {"w", 5}});

    cout << "STL Map after inserting Element is : \n";
    map<string, int>::iterator it1;
    for (it1 = marksMap.begin(); it1 != marksMap.end(); it1++)
    {
        cout << (*it1).first << " " << (*it1).second << endl;
    }
    return 0;
}