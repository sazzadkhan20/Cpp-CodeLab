#include<iostream>

using namespace std;

string replace_lowercase_by_uppercase_vice_versa(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
           s[i]=char(s[i]+32);
        }
        else if (s[i]>='a' && s[i]<='z')
        {
           s[i]=char(s[i]-32);
        }
    }
    return s;
}

int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    cout<<"\n\nAfter Replace Lowercase Characters By Uppercase and Vice Versa: "<<replace_lowercase_by_uppercase_vice_versa(s);
    string s1 = "This is One";
    string s2 = "This is Two";
    string finalString = s1+s2;
    cout<<endl<<finalString;
}


