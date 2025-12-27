#include<bits/stdc++.h>

using namespace std;

int min_opertion(int *arr,int n)
{
    if(n%2 !=0 )
    {
        return -1;
    }
    int evenCount = 0,oddCount = 0;

    for(int i=0; i<n; i++)
    {
       if(arr[i]%2 == 0)  evenCount++;

       else oddCount++;
    }
    if(evenCount == oddCount)
    {
        return 0;
    }
    return abs((evenCount - oddCount)/2);
}

int main()
{
    int testCase,n;
    cin>>testCase;

    for(int i=0; i<testCase; i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        cout<<min_opertion(arr,n)<<endl;
    }
}