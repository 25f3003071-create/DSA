#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size: ";
    cin >> n;
    int *arr = new int[n];
    cout << "enter elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "array elements: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}