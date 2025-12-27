#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
       cin>>arr[i];
    }
    int mx = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    mx++;
    int feq[mx] = {0};

    for(int i=0; i<n; i++)
    {
        feq[arr[i]]++;
    }
    int count = 0;
    
    for(int i=0; i<mx; i++)
    {
       for(int j=0; j<feq[i]; j++)
       {
          //cout<<i<< " ";
          arr[count] = i;
          count++;
       }
    }

    for(int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";
    }

}