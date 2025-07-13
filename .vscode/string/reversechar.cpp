#include <iostream>
#include <cstring> // strlen ke liye

using namespace std;
void reverse(char arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{
    char arr[50];
    cout << "enter the value " << endl;
    cin.getline(arr, 50);
    reverse(arr, strlen(arr)); // sahi length pass ki
    cout << "output   " << arr << endl;
}