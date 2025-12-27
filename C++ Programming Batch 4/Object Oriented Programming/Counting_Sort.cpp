#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int feq[26] = {0};
    
    for(char c : s)
    {
        feq[c - 'a']++;
    }
    string s1 = "";
    
    for(char i='a'; i<'z'; i++)
    {
        for(int j=0; j<feq[i-'a']; j++)
        {
            s1 += i;
        }
    }
    s = s1;
    cout<<s<<endl;
}