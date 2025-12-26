#include<iostream>

using namespace std;

int main()
{
    int n,counter=0,a,b;
    cout<<"Input a number: ";
    cin>>n;
    int m=n,p=n;
    cout<<endl<<endl;
    for(int i=0; i<10; i++)
    {
     cout<<"The frequency of "<<i<<" = ";
       while(n!=0)
       {
           a=n%10;
           n=n/10;
           if(a==i)
           {
             while(m!=0)
             {
                 b=m%10;
                 m=m/10;
                 if(b==i)
                 {
                     counter++;
                 }
             }
             break;
           }
      }
      cout<<counter<<endl<<endl;
      counter=0;
      n=p;
      m=p;
    }
}
