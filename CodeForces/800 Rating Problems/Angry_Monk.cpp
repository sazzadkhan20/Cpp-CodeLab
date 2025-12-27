#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    int n,k;

    while(testCase--)
    {
        cin>>n>>k;
        vector<int> v(k);
        long long int count_1 = 0;
        long long int minOpertion = 0;
        for(int i=0; i<k; i++)
        {
            cin>>v[i];
            if(v[i] == 1)
            {
               count_1++;
               continue;
            }
            minOpertion += v[i] - 1;
            count_1 += v[i];
        }
        int maxValue = v[0];
        for(int i=1; i<k; i++)
        {
            if(maxValue < v[i])
            {
               maxValue = v[i];
               continue;
            }
        }
        count_1 -= maxValue;
        minOpertion -= (maxValue -1);
        minOpertion += count_1;
        cout<<minOpertion<<endl;
    }
}