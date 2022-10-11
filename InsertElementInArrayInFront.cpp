#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of your Array : ";
    cin >> n;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        arr.push_back(e);
    }
    cout << "\n";
    int elem;
    cout << "Enter Element you want to Insert At Front : ";
    cin >> elem;
    arr.insert(arr.begin() + n,elem);
    cout << "\n";
    cout << "Your Array after Inserting Element at the Front : ";
    display(arr);
    return 0;
}