#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase,n;
    cin>>testCase;

    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        int squ[n];
        long long int sum = 0;
        for(int j=0; j<n; j++)
        {
            cin>>squ[j];
            sum +=squ[j];
        }

        double temp1 = sqrt(sum*1.0);
        long long int temp2 = sqrt(sum*1.0);

        if((temp1 - temp2) == 0)  cout<<"YES\n";
        else  cout<<"NO\n";
    }
}