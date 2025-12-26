#include<iostream>

using namespace std;

string remove_characters_except_alphabets(string s)
{
    string s1="";
   for(int i=0; i<s.length(); i++)
    {
        if(!(s[i]>='A' && s[i]<='Z') && (s[i]>='a' && s[i]<='z'))
        {
           s1+=s[i];
        }
        else{

        }

    }
    return s1;
}

int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    cout<<"\n\nAfter removing characters except Alphabets the Output String is: "<<remove_characters_except_alphabets(s);
}



