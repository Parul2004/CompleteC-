#include <iostream>
using namespace std;

typedef struct emp
{
    int eId;
    char favChar;
    float salary;

} ep;

struct p1
{
    int d;
    int h;
    int b;
};

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{

    ep parul;
    parul.eId = 1;
    parul.favChar = 'd';
    parul.salary = 12.34;

    cout << parul.eId << endl;
    cout << parul.favChar << endl;
    cout << parul.salary << endl;

    struct p1 lokesh;
    lokesh.b = 23;
    lokesh.h = 78;
    lokesh.d = 56;

    cout << lokesh.b << endl;
    cout << lokesh.h << endl;
    cout << lokesh.d << endl;

    union money m1;
    m1.rice = 45;
    // m1.pounds = 43.34;
    cout << m1.rice << endl;
    // cout << m1.pounds << endl;

    enum meal
    {
        b,
        l,
        d
    };
  
    cout << (l== 1);
    return 0;
}