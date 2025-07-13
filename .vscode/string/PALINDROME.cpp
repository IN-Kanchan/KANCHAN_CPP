#include <iostream>
#include <cstring>
using namespace std;
bool palindrome(char arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
int main()
{
    char arr[50];
    cout << "enter the values" << endl;
    cin.getline(arr, 50);
    bool ans = palindrome(arr, strlen(arr));
    if(ans==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    cout << "valid palindrome or not  " << endl
         << ans << endl;
}