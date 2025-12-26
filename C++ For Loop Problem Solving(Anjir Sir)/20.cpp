#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {

        cout<<endl<<endl;

        if(i%2!=0)
        {
            for(int j=1; j<=i; j++)
            {
                if(j%2!=0)
                {
                    cout<<"1 ";
                }
                else
                {
                    cout<<"0 ";
                }

            }

        }
        else
        {
            for(int j=1; j<=i; j++)
            {
                if(j%2!=0)
                {
                    cout<<"0 ";
                }
                else
                {
                    cout<<"1 ";
                }

            }
        }


    }
}
