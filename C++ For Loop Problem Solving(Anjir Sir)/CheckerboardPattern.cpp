#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"input number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<endl<<endl;
        for(int j=i; j<=n+i-1; j++)
        {
            if(j==i)
            {
             if(j%2==0)
            {
                cout<<"white";
            }
            else
            {
                cout<<"black";
            }
            }
            else
            {
            if(j%2==0)
            {
                cout<<"-white";
            }
            else
            {
                cout<<"-black";
            }
            }
        }
    }
    cout<<endl<<endl<<endl;
}
