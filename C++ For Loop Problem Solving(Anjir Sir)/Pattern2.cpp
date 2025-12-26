#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input number of numbers: ";
    cin>>n;
    cout<<endl<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
                if(j!=i)
                {
                    cout<<j;
                }
                else
                {
                    cout<<i;
                    for(int u=i-1; u>=1; u--)
                    {
                        cout<<u;
                    }
                }
        }
        cout<<endl;
    }
}
