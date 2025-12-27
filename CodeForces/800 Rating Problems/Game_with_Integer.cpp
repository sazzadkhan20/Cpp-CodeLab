#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase,n;
    cin>>testCase;

    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        if(n%3 == 0)   cout<<"Second\n";
        else   cout<<"First\n";
    }

}