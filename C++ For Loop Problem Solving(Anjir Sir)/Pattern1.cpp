#include <iostream>

using namespace std;

int main()
{
   int n;

   int a = 1;
   int b= 1;
   int c = 1;

   cout<<"Input the number of Letters (less than 26) in the Pyramid: ";
   cin>>n;
   for(int i=0; i<=n; i++)
   {
       cout<<endl<<endl;

       for(int j=i; j<n-1; j++)
       {
           cout<<" ";
       }
       for(int j=0; j<=i; j++)
       {
           for(int p=i; p>0; p--)
           {
               a =a*p;
           }
           for(int p=j; p>0; p--)
           {
               b =b*p;
           }
           for(int p=(i-j); p>0; p--)
           {
               c =c*p;
           }
           int d = (a)/(b*c);
           cout<<d<<" ";
           a = 1;
           b= 1;
           c = 1;
       }

        for(int j=i; j<n-2; j++)
       {
           cout<<" ";
       }

   }
}

