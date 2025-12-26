#include <iostream>

using namespace std;

int main()
{
    int n,a=1;
    cout<<"Number of rows: ";
    cin>>n;
    cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0)
            {
                a = 1;
            }
            else
            {
                a = a*(i-j+1)/j;
            }
            cout<<" "<<a<<" ";
        }
        cout<<endl;
    }
}
