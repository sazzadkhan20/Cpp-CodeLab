#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input the number of Letters (less than 26) in the Pyramid: ";
    cin>>n;

     char a='A';
     //cout<<int(a);
     //char a=65;//also follow  this way
     for(int i=0; i<n; i++)
     {
         for(int j=0; j<=i; j++)
         {
             if(i==0)
             {
                 cout<<a;
             }
             else
             {
                 if(j!=i)
                 {
                     cout<<a;
                     a++;
                 }
                 else
                 {
                     cout<<a;
                     for(int u=i-1; u>=0; u--)
                     {
                         a--;
                         cout<<a;
                    }
                 }
            }
         }
         a ='A';
         cout<<endl;
     }
}
