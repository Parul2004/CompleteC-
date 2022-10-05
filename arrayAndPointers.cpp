#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 56, 89};
    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << " ";
    }

    int mathMarks[4];
    mathMarks[0] = 1;
    mathMarks[1] = 4;
    mathMarks[2] = 5;
    mathMarks[3] = 9;

    mathMarks[3] = 100;
    cout << "\nThese are math marks" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << mathMarks[i] << " ";
    }
    cout << endl;
    cout<<"Something new 😁😁\n";
    int *i = marks;
    cout << *i << " ";
    cout << *(++i) << " ";
    cout << *(++i) << " ";
    cout << *(++i) << " ";
    return 0;
}