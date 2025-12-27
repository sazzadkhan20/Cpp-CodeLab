#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    long long int a,b,n;
    cin>>testCase;
    int count;

    for(int i=0; i<testCase; i++)
    {
        cin>>a>>b>>n;
        count = 0;
        while(1)
        {
          if(b > a)
          {
              a += b;
           count++;
           if(a > n)
           {
             cout<<count<<endl;
             break;
           }
           b += a;
           count++;
           if(b > n)
           {
             cout<<count<<endl;
             break;
           }
          }
          else{
             b += a;
           count++;
           if(b > n)
           {
             cout<<count<<endl;
             break;
           }
           a += b;
           count++;
           if(a > n)
           {
             cout<<count<<endl;
             break;
           }
          }
           
        }

    }
}