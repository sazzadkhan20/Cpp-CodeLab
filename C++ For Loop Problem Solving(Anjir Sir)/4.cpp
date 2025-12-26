#include <iostream>
using namespace std;
int main()
{
int n, a=0, rem;
cout<<"Enter a number: ";
cin>>n;
  while(n!=0)
  {
     rem=n%10;
     a=a*10+rem;
     n/=10;
  }
 cout<<"Reversed Number: "<<a<<endl;
return 0;
}
