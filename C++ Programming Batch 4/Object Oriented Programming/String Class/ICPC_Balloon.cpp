#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase,n;
    string s;
    int balloonCount;
    cin>>testCase;

    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        cin>>s;
        balloonCount = 0;
        sort(s.begin(),s.end());
        for(int j=0; j<s.size(); j++)
        {
            if(j == 0)
            {
               balloonCount +=2;
            }
            else if(s[j] == s[j-1])
            {
               balloonCount ++;
            }
            else
            {
               balloonCount +=2; 
            }
        }
        cout<<balloonCount<<endl;
    }
}