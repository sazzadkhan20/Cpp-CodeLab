#include <iostream>

using namespace std;

int main()
{
   int n,a;
   string s="";
   cout<<"Input a decimal number: ";
   cin>>n;
   cout<<"\n\nThe binary number is: ";
   while(n!=0)
   {
       a=n%2;
       n=n/2;
       s=s+to_string(a);
   }
   for(int i=s.length()-1; i>=0; i--)
   {
       cout<<s[i];
   }
}
