#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    long long int n,k;
    cin>>testCase;

    while(testCase--)
    {
        cin>>n>>k;

        if(n%2 == 0)
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            if((n-k)%2 == 0)
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
}