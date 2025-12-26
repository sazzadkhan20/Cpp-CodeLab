#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<endl<<endl<<"Input the starting value for ASCII characters: ";
    cin>>n;
    cout<<endl<<endl<<"Input the ending value for ASCII characters: ";
    cin>>m;
    cout<<endl<<endl<<"The ASCII characters: "<<endl<<endl;
    if(m>n)
    {
     for(n; n<=m; n++)
     {
        cout<<n<<"--> "<<char(n)<<endl<<endl;
     }
    }
    else
    {
      for(n; n>=m; n--)
     {
        cout<<n<<"--> "<<char(n)<<endl<<endl;
     }
    }
    int p,q,a=1;
   cout<<"Input Base: ";
   cin>>p;
   cout<<endl<<endl<<"Input exponent: ";
   cin>>q;
   cout<<endl<<endl<<"Result: ";
    for(int i=1; i<=q; i++)
     {
        a=a*p;
     }
     cout<<a<<endl<<endl;
}


