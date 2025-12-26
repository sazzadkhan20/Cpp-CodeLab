#include<iostream>

using namespace std;

string extract_string(string s,int startIndex)
{
    if(s.length()>startIndex)
    {
        string s1;
        for(int i=startIndex; i<s.length(); i++)
        {
            s1+=s[i];
        }
        return s1;
    }
    else
    {
        return "";
    }
}
string extract_string(string s,int startIndex,int endIndex)
{
    if(s.length()>startIndex && startIndex<=endIndex)
    {
        string s1;
        for(int i=startIndex; i<=endIndex; i++)
        {
            s1+=char(s[i]);
        }
        return s1;
    }
    else if (s.length()>startIndex && startIndex>endIndex)
    {
       string s1;
        for(int i=endIndex; i<=startIndex; i++)
        {
            s1+=(char)s[i];
        }
        return s1;
    }
    else
    {
        return "";
    }
}

int main()
{
    string s ;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    cout<<"\n\nExtract String is: "<<extract_string(s,5);
}
