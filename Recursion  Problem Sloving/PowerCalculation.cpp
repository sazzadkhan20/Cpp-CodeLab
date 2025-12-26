#include<iostream>

using namespace std;

int powerCalculation(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return b * powerCalculation(b,p-1);
    }
}

int main()
{
    int base,power;
   cout<<"\n\nEnter a Base: ";
   cin>>base;
   cout<<"\n\nEnter a power: ";
   cin>>power;
   cout<<endl<<endl<<"Power Calculation is: "<<powerCalculation(base,power)<<endl;
}
