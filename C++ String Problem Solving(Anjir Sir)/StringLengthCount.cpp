#include<iostream>

using namespace std;

int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    int lengthOfString = 0;
    int i=0;
    while(s[i]!='\0')
    {
        lengthOfString++;
        i++;
    }
    s[lengthOfString] = 'A';
    cout<<s[lengthOfString];
    cout<<"\n\n String Length is: "<<lengthOfString;
    cout<<"\n\n String  is: "<<s;
}

