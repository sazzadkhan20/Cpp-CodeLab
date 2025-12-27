#include<bits/stdc++.h>

using namespace std;

int main()
{
    int numberOfTestCase;
    cin>>numberOfTestCase;
    long long int a,b,c,sum;

    for(int i=0; i<numberOfTestCase; i++)
    {
        cin>>a>>b>>c;
        bool flag1 = false,flag2 = false;
        if(c % 2 == 0)  flag2 = true;
           else  flag1 = true;
        if(a > b)
        {
           flag1 = true;
           flag2 = false;
        }
        else if(a < b)
        {
           flag1 = false;
           flag2 = true;
        }
        if(flag1)   cout<<"First\n";
        if(flag2) cout<<"Second\n";
        
             
    }
}