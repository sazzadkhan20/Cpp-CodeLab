#include<bits/stdc++.h>

using namespace std;

class Feq
{
    public:
    char c;
    int characterCount;
};

bool cmp(Feq f1,Feq f2)
{
    if(f1.characterCount == f2.characterCount)
    {
        return f1.c < f2.c;
    }
    else
    {
      return f1.characterCount > f2.characterCount;
    }
}

int main()
{
    string s;
    cin>>s;
    
    Feq feq[26];
    for(int i=0; i<26; i++)
    {
        feq[i].characterCount = 0;
    }

    for(char ch : s)
    {
        feq[ch-'a'].c = ch;
        feq[ch-'a'].characterCount++;
    }

    string s1 = "";
    sort(feq,feq+26,cmp);

    for(char i='a'; i<'z'; i++)
    {
        // if(feq[i-'a'].characterCount!=0)
        // {
        //     cout<<feq[i-'a'].c<<" - "<<feq[i-'a'].characterCount<<endl;
        // }
        for(int j=0; j<feq[i-'a'].characterCount; j++)
        {
            s1 += feq[i-'a'].c;
        }
    }
     s = s1;

     cout<<s<<endl;
}