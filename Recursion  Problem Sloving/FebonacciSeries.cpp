#include<iostream>

using namespace std;

int febonacci_series(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return febonacci_series(n-1) + febonacci_series(n-2);
    }
    /*int f;
    if(n<=1)
    {
        return n;
    }
    else
    {
        int f1 = 0;
        int f2 = 1;
        cout<<f1<<"  "<<f2<<"  ";
       for(int i=2; i<=n; i++)
       {
           f = f1+f2;
           f1 = f2;
           f2 = f;
           cout<<f<<"  ";
       }
    }
    return f;*/
}

int main()
{
    int num;
   cout<<"\n\nEnter a Num: ";
   cin>>num;
   cout<<endl<<endl<<febonacci_series(num)<<endl;
}
