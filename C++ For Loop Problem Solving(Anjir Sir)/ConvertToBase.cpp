#include <iostream>

using namespace std;

int main()
{
    int base,number;
    cout<<"Input Base: ";
    cin>>base;
    cout<<"\n\nInput Number: ";
    cin>>number;
    cout<<"\n\nThe numbers in base "<<base<<"are: \n\n";

    for(int i=1; i<=number; i++)
    {
       int r=i%base;
       int p=i/base;
       cout<<(p*10+r)<<" ";
    }
}
