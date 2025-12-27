#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    int n;

    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        int count = n-1;
        int seq[n];
        for(int j=0; j<n; j++)
        {
            cin>>seq[j];
        }
        cout<<seq[0]<<" ";
        if(n%2 == 0){
        for(int j=1; j<n/2; j++)
        {
            cout<<seq[count]<<" "<<seq[j]<<" ";
            count--;
        }
     }
        else if(n%2!= 0){
          for(int j=1; j<=n/2; j++)
          {
            cout<<seq[count]<<" "<<seq[j]<<" ";
            count--;
          } 
        }
        if(n%2 == 0)
        {
            cout<<seq[count]<<" ";
        }
        cout<<endl;
    }
}