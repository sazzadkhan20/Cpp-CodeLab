#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input number of rows: ";
    cin>>n;
    cout<<endl<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        for(int j=i; j<n-1; j++)
        {
            cout<<" ";
        }
        cout<<endl<<endl;

    }
}
