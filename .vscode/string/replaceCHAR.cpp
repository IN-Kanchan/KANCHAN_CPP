#include <iostream>
#include <cstring>
using namespace std;
void replace(string &str, char oldchar, char newchar)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == oldchar)
        {
            str[i] = newchar;
        }
    }
}
int main()
{

    string mystring;
    char newchar, oldchar;
    cout << "enter the string  " << endl;
    getline(cin, mystring);

    cout << "enter the which chararacter you want to replace" << endl;
    cin >> oldchar;
    cout << "enter the new character you want to put in place of oldcharacter" << endl;
    cin >> newchar;
    replace(mystring, oldchar, newchar);
    cout << "upadated string " << mystring << endl;
    return 0;
}
