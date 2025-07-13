#include <iostream>
using namespace std;
bool linear(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    cout << "enter the size of array" << endl;
    int size;
    cin >> size;
    int num[100];
    cout << "enter the element of an array" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    int key;
    cout << "enter the key you want to search" << endl;
    cin >> key;
    bool found = linear(num, size, key);
    if (found)
    {
        cout << "key is present " << key;
    }
    else
    {
        cout << "key is absent " << key;
    }
}
