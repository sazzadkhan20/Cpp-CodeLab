#include <iostream>

using namespace std;

int main()
{
    int n,a=1;
    cout<<"Input number of rows: ";
    cin>>n;
    cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++)
        {
            if(i==0)
            {
              cout<<a<<" ";
            }
            else
            {
                if(j!=i)
                {
                   cout<<a<<" ";
                    a++;
                }
                else
                {
                 cout<<a<<" ";
                for(int u=0; u<=i-1; u++)
                {
                    a--;
                    cout<<a<<" ";
                }
                }
            }
        }
        for(int j=i; j<n-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        a++;
    }
}
