#include <iostream>
using namespace std;
void solve(int arr[], int n)
{
    int totalzeros = 0;
    int totalones = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            totalzeros++;
        }
        else
        {
            totalones++;
        }
    }
    cout << "total zeros   = " << totalzeros << endl;
    cout << "total ones  = " << totalones << endl;
}
int main()
{
    int arr[] = {1, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int size = 10;
    solve(arr, size);
    return 0;
}