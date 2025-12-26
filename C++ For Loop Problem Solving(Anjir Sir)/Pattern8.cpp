#include<iostream>

using namespace std;

int main()
{
   int n;
   char a=65,b=3;
   cout<<"Input number of rows: ";
   cin>>n;
   cout<<endl<<endl;
   for(int i=1; i<=n; i++)
   {
       for(int j=i; j<=n; j++)
       {
        if(j!=n)
       {
           cout<<" "<<a;
           a++;
       }
       else
       {
           if(i==1)
           {
             for(int u=i; u<=n; u++)
           {
             cout<<" "<<a;
               a--;

           }
           }
           else{
           cout<<" "<<a;
           for(int p=j; p<n+b; p++)
           {
               cout<<" ";
           }
           for(int u=i; u<=n; u++)
           {
             cout<<a<<" ";
               a--;

           }
           b+=4;
           }
       }
       }
       cout<<endl<<endl;
       a=65;
   }

}
