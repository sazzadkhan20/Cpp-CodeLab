#include<iostream>

using namespace std;

int main()
{

    int n,a,b;
    bool f=true;
    cin>>n;
    while(n!=0)
    {

      a=n%10;
      b=n%10;
      if(f==true)
      {
          cout<<a<<endl;
      }
      n=n/10;
      f=false;

    }
    cout<<b<<endl;
}
