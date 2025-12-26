#include<iostream>

using namespace std;

int F[51];

int febonacci_series(int n)
{
   /* if(n<=1)
    {
        return n;
    }*/
    if(F[n]!=-1)
    {
        return F[n];
    }
    F[n] = febonacci_series(n-1) + febonacci_series(n-2);
    return F[n];
}

int main()
{
    for(int i=0; i<51; i++)
    {
        F[i] = -1;
    }
    F[0] = 0;
    F[1] = 1;
    int num;
   cout<<"\n\nEnter a Num: ";
   cin>>num;
   cout<<endl<<endl<<febonacci_series(num)<<endl;
   for(int i=0; i<=num; i++)
   {
       cout<<"  "<<F[i];
   }
}
