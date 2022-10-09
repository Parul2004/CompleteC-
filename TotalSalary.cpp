#include <iostream>
#include <math.h>
using namespace std;
int totalSalary(int basic, char grade)
{
    // Write your code here.
    float hra = (0.2) * basic;
    float da = (0.5) * basic;
    float pf = (0.11) * basic;
    float t;
    if (grade == 'A')
    {

        t = round(basic + hra + da + 1700 - pf);
    }
    else if (grade == 'B')
    {
        t = round(basic + hra + da + 1500 - pf);
    }
    else if (grade == 'C')
    {
        t = round(basic + hra + da + 1300 - pf);
    }
    return (t);
}
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int basic;
        cin >> basic;
        char grade;
        cin >> grade;
        cout << totalSalary(basic, grade);
    }

    return 0;
}