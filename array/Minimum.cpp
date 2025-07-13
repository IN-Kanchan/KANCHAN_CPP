#include <iostream>
using namespace std;
int getmin(int arr[], int n)
{
   int min = INT_MAX;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] < min)
      {
         min = arr[i];
      }
   }
   return min;
}
int main()
{
   int size;
   cin >> size;
   int nums[200];
   for (int i = 0; i < size; i++)
   {
      cin >> nums[i];
   }
   int minimum = getmin(nums, size);
   cout << "minimum value is " << "  " << minimum << endl;
}