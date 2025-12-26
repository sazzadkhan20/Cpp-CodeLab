#include<iostream>
#include<conio.h>


using namespace std;

string strcopy(string &s1,string s2)
{
    s1 = "";
    for(int i=0; i<s2.length(); i++)
    {
       s1+=s2[i];
    }
    return s1;
}

int main()
{
    string s1 ="Sazzad";
    string s2 ="Khan";
    cout<<strcopy(s1,s2)<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;

    getch();
}







