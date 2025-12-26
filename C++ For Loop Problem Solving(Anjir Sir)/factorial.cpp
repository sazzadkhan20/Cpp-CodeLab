#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a =1;
    for(int i=n; i>0; i--)
    {
       a=a*i;

    }
    cout<<"Factorial Number is: "<<a;

}
