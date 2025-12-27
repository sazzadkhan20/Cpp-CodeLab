#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase,n;
    cin>>testCase;
    while(testCase--)
    {
       cin>>n;
       int a[n];
       for(int i=0; i<n; i++)
       {
          cin>>a[i];
       }
       bool flag = false;
       int sum = 0;
       int count = 0;
       for(int i=0; i<n-1; i++)
       {
        if(a[i] == 1) count++;
         if((a[i] == -1 && a[i+1] == -1) && !flag)
         {
            a[i] = 1;
            a[i+1] = 1;
            flag = true;
         }
         sum += a[i];
       }
       sum += a[n-1];
       if(a[n-1] == 1) count++;
       if(!flag && count == n)
       {
         sum -= 4;
       }
       cout<<sum<<endl;
    }
}