#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Input a number: ";
    cin>>a;
    cout<<endl<<endl<<"The number in reverse order is: ";
    while (a!=0)
    {
       b=a%10;
       cout<<b;
       a=a/10;


    }

}
