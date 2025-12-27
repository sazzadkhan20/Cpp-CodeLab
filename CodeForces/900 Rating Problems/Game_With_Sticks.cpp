#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int count = 0;
    int multi = n*m;
    int sum;
    while(multi > 0)
    {
        sum = n + m;
        sum--;
        multi -= sum;
        n--;
        m--;
        count++;
    }
    if(count%2 == 0) cout<<"Malvika\n";
    else cout<<"Akshat\n";
}