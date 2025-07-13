#include <iostream>
using namespace std;
void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i] << "  ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    solve(arr, size);
    return 0;
}