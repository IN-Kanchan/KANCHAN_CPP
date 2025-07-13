#include <iostream>
#include <vector>
using namespace std;
void marge(int arr[], int s, int e, int mid)
{
    int leftArrayLength = mid - s + 1;
    int rightArrayLength = e - mid;
    int mainArrayIndex = s;
    int *arr1 = new int[leftArrayLength];
    int *arr2 = new int[rightArrayLength];
    for (int i = 0; i < leftArrayLength; i++)
    {
        arr1[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < rightArrayLength; i++)
    {
        arr2[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }
    // logic for marge two array
    int i = 0;
    int j = 0;
  mainArrayIndex = s;

    while (i < leftArrayLength && j < rightArrayLength)
    {
        if (arr1[i] < arr2[j])
        {
            arr[mainArrayIndex] = arr1[i];
            i++;
            mainArrayIndex++;
        }
        else
        {
            arr[mainArrayIndex] = arr2[j];
            j++;
            mainArrayIndex++;
        }
    }
    while (i < leftArrayLength)
    {
        arr[mainArrayIndex] = arr1[i];
        i++;
        mainArrayIndex++;
    }
    while (j < rightArrayLength)
    {
        arr[mainArrayIndex] = arr2[j];
        j++;
        mainArrayIndex++;
    }
}
void margeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    margeSort(arr, s, mid);
    margeSort(arr, mid + 1, e);
    marge(arr, s, e, mid);
}
int main()
{
    int arr[] = {10, 5, 4, 6, 9, 0, 8, 7, 3, 1, 2};
    int size = 11;
    int start = 0;
    int end = size - 1;
    margeSort(arr, start, end);
    cout << "print output" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
