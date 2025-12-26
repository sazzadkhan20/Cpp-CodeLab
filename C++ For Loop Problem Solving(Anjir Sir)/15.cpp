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
       for(int j=1; j<=i;j++)
       {
           cout<<i;
       }
   }
}
