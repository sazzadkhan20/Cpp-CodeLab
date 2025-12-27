#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string word;
    int wordCount = 0;
   // cout<<!word.empty();
   bool found = false;

    for(int i=0; i<s.size(); i++)
    {
        // One Process ---
        /*if(isalpha(s[i]))
        {
            word += s[i];
        }
        else if(!word.empty())
        {
           wordCount++;
           word = "";
        }*/

        // Another Process ---
        if(isalpha(s[i]))
        {
            if(!found)
            {
               wordCount++;
               found = true;
            }
        }
        else
        {
            found = false;
        }

    }
    cout<<wordCount<<endl;
    /*if(!word.empty())
    {
        wordCount++;
    }*/
     //cout<<wordCount<<endl;
}