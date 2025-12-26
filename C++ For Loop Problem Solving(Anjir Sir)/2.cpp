#include <iostream>

using namespace std;

int main()
{
    int a,b,n1,n2,rem,GCD,LCM;
    cout<<"Input 1st number for LCM: ";
    cin>>a;
    cout<<endl<<endl<<"Input 2nd number for LCM: ";
    cin>>b;
    cout<<endl<<endl<<"The LCM of "<<a<<" and "<<b<<" is: ";
    if (a>b)
    {
        n1=a;
        n2=b;
    }
    else
    {
        n1=b;
        n2=a;
    }
    while (n2!=0)
    {
       rem=n1%n2;
       n1=n2;
       n2=rem;
    }
    GCD=n1;
    LCM=(a*b)/GCD;
    cout<<LCM;
    cout<<endl<<endl<<"The vlaue of GCD is: "<<GCD<<endl<<endl;

}
