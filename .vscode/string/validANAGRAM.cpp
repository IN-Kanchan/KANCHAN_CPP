#include <iostream>
using namespace std;
bool isanagram(string s, string t){
    int arr[256]={0};
        if (s.length() != t.length()) return false;

    for(int i=0; i<s.length(); i++){
        char ch= s[i];
        arr[ch]++;
    }
      for(int i=0; i<t.length(); i++){
        char ch= t[i];
        arr[ch]--;
    }
    for(int i=0; i<256; i++){
        if(arr[i]!=0)  return false;
    }
    return true;
}
int main()
{
    string s1, s2;
    cout << "enter the  1st string " << endl;
    getline(cin, s1);
    cout << "enter the  2nd string " << endl;
    getline(cin, s2);
    if(isanagram(s1,s2)){
        cout<<"they are anagrams"<<endl;
    }
    else{
        cout<<"they are not anagrams"<<endl;
    }
    return 0;
}