#include<iostream>

using namespace std;

int main()
{
   int n,a=1;
   cout<<"Input number of rows: ";
   cin>>n;
   for(int i=n; i>0; i--)
   {
       cout<<endl<<endl;
       for(int j=i; j<n; j++)
       {
           cout<<" ";
       }
       for(int j=1; j<=i; j++)
       {
           if(j!=i)
           {
               cout<<j<<" ";
           }
           else
           {
               cout<<j<<" ";
               for(int j=i-1; j>0; j--)
               {
                  cout<<j<<" ";
               }
           }
       }
       for(int j=i; j<n-1; j++)
       {
           cout<<" ";
       }
   }
}
