#include <iostream>
#include <cstring>
using namespace std;
string isvalid(string s)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ans.empty())
        {
            ans.push_back(ch);
        }
        else if(ch!=ans.back()){
            ans.push_back(ch);
        }
        else{
            ans.pop_back();
        }
    }
    return ans;
}
int main()
{
    string s;
    cout << "enter your string ";
    getline(cin, s);
    string ans = isvalid(s);
    cout << "this is final ans" << endl<<ans;
    return 0;
}