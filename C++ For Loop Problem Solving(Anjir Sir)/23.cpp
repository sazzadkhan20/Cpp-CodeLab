#include<iostream>

using namespace std;

int main()
{
    int n,a=1;
    cout<<"Input number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<endl<<endl;
        for(int j=i; j<n; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++)
        {
            if(j==0)
            {
                a=1;
            }
            else
            {
                a=a*(i-j+1)/j;
            }
            cout<<a<<" ";

        }
        for(int j=i; j<n-1; j++)
        {
            cout<<" ";
        }

    }

}
