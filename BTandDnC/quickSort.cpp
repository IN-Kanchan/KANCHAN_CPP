#include <iostream>
#include <vector>
using namespace std;
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int pivot = e;
    int i = s - 1;
    int j = s;
    while (j < pivot)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    quickSort(arr, s, i - 1);
    quickSort(arr, i + 1, e);
}
int main()
{
    int arr[] = {10, 5, 4, 6, 9, 0, 8, 7, 3, 1, 2};
    int size = 11;
    int start = 0;
    int end = size - 1;
    quickSort(arr, start, end);
    cout << "print quicksort output" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
