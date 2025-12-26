/*#include<iostream>

using namespace std;

int main()
{
    std:cout<<"Hello World";
}*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int m,n;
    cout<<"Display the pattern like a pyramid with power of : ";
    cin>>m;
    cout<<endl<<endl<<"---------------------"<<endl<<endl<<"Input Number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++)
        {
            if(j!=i)
            {
                cout<<pow(m,j)<<" ";
            }
            else
            {
                cout<<pow(m,j)<<" ";
                for(int u=i-1; u>=0; u--)
                {
                    cout<<pow(m,u)<<" ";
                }
            }
        }
        for(int j=i; j<n-1; j++)
        {
            cout<<" ";
        }
        cout<<endl<<endl;
    }
}
