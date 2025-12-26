#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input number of rows(Half of the Diamond): ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<endl<<endl;
        for(int j=i; j<n; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        for(int j=i; j<n; j++)
        {
            cout<<" ";
        }
    }
    for(int i=n-1; i>=1; i--)
    {
        cout<<endl<<endl;
        for(int j=i; j<=n-1; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            cout<<"*";
        }
        for(int j=i; j<=n-1; j++)
        {
            cout<<" ";
        }
    }
    cout<<endl<<endl;
}
