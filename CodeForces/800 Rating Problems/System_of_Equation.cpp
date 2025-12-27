#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int count = 0;
    int num = min(n,m);
    int value1,value2;

    for(int i=0; i<=num; i++)
    {
        for(int j=0; j<=num; j++)
        {
            value1 = i*i + j;
            if(value1 == n)
            {
              value2 = j*j + i;
              if(value2 == m)
              {
                count++;
              }
            }
        }
    }
    cout<<count<<endl;
}