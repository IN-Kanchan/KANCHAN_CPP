#include <iostream>
#include <vector>
using namespace std;
double average(vector<int> &arr)
{
    int n = arr.size();
    double ans = 0;
    double totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }
    return totalsum / n;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    double ans = average(arr);
    cout << ans;
    return 0;
}