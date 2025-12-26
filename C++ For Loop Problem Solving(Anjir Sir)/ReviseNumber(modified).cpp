#include<iostream>

using namespace std;

int main()
{
    int n,a=0,b=0;
    cout<<"Input a number: ";
    cin>>n;
    int c=n;
    int d;
    int e=1;
    while(n!=0)
    {
       a=n%10;
       n=n/10;
       if(b==0)
       {
          d=a;
       }
       e=e*a;
       b++;
    }
    b=d+a;
    cout<<endl<<endl<<"The first digit of "<<c<<" is: "<<a<<endl;
    cout<<endl<<endl<<"The last digit of "<<c<<" is: "<<d<<endl;
    cout<<endl<<endl<<"The sum of first and last digit of "<<c<<" is: "<<b<<endl;
    cout<<endl<<endl<<"The product of digit of "<<c<<" is: "<<e<<endl;
}
