#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> vec1;
        int k;
        cin >> k;
        int arr[k];

        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < k; i++)
        {
            int s = 1;
            for (int j = 0; j < k; j++)
            {
                if (i != j)
                {
                    s*=arr[j];
                }
            }
            vec1.push_back(s);
        }

        display(vec1);
    }

    return 0;
}