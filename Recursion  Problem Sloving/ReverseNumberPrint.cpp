#include<iostream>

using namespace std;

void reverse_number(int n)
{
    if(n==6)
    {
        return;
    }
   reverse_number(n+1);
   if(n==1)
       cout<<n;
       else
      cout<<n<<" ";
}
/*void number_print(int n)
{
  if(n==4)
  {
      return;
  }
  cout<<n<<endl;
  number_print(n+1);
}*/

int main()
{
    reverse_number(1);
    //number_print(1);
}
