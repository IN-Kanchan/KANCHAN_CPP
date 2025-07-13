#include <iostream>
#include <cstring>
using namespace std;
bool isvalidchar(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}
string normaliseSTR(string &s)
{
    string newstr = "";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (isvalidchar(ch))
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch - 'A' + 'a';
            }
            newstr.push_back(ch);
        }
    }
    return newstr;
}
bool validpalindrome(string str)
{
    string newstring = normaliseSTR(str);
    int s = 0;
    int e = newstring.length() - 1;
    while (s <= e)
    {
        if (newstring[s] != newstring[e])
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
    string s;
    cout << "enter the string " << endl;
    getline(cin, s);
    bool ans = validpalindrome(s);
    if (ans == true)
    {
        cout << "its a valid palindrome" << endl;
    }
    else
    {
        cout << "its a not valid palindrome" << endl;
    }
    return 0;
}