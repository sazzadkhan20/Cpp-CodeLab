#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input Number of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<"\n\n";
        for(int j=i-1; j>=0; j--)
        {
            if(j==0)
            {
               cout<<j<<" ";
               for(int p=1; p<=(n-i); p++)
               {
                   cout<<p<<" ";
               }
            }
            else
            {
                cout<<j<<" ";
            }
        }
    }
}
