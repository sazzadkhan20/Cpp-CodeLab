#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int one_count = 0,two_count = 0,three_count = 0;
    string s1 ="";

    for(int i=0; i<s.size(); i++)
    {
       if(s[i] - 48 == 1)
       {
          one_count++;
       }
       else if(s[i] - 48 == 2)
       {
          two_count++;
       }
       else if(s[i] - 48 == 3)
       {
          three_count ++;
       }
    }

    for(int i=0; i<one_count; i++)
    {
        s1 += "1+";
    }
     for(int i=0; i<two_count; i++)
    {
        s1 += "2+";
    }
     for(int i=0; i<three_count; i++)
    {
        s1 += "3+";
    }
    string s2 = "";

     for(int i=0; i<s1.size()-1; i++)
    {
        s2 += s1[i];
    }

    cout<<s2<<endl;

}