#include <iostream>
#include <vector>
using namespace std;
void margeTwosortedArray(int arr1[], int size1, int arr2[], int size2, vector<int> &output)
{
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            output.push_back(arr1[i]);
            i++;
        }
        else
        {
            output.push_back(arr2[j]);
            j++;
        }
    }
    while (i < size1)
    {
        output.push_back(arr1[i]);
        i++;
    }
    while (j < size2)
    {

        output.push_back(arr2[j]);
        j++;
    }
}
int main()
{
    int arr1[] = {10, 20, 30, 40};
    int size1 = 4;
    int arr2[] = {15, 25, 35, 45, 55, 65};
    int size2 = 6;
    vector<int> output;
    margeTwosortedArray(arr1, size1, arr2, size2, output);
    cout << "print output" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << output[i] << " ";
    }
}