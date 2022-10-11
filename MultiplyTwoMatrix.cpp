#include <iostream>
using namespace std;

int main()
{
    int a1[10][10], b1[10][10], mult[10][10], r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        exit(0);
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a1[i][j];
        }
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b1[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mult[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                mult[i][j] += a1[i][k] * b1[k][j];
            }
        }
    }
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
                cout << endl;
        }

    return 0;
}