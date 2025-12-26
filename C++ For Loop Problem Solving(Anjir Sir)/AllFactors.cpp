#include<iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Input a number: ";
  cin>>n;
  cout<<endl<<endl<<"The Factors are: ";
  for(int i=1; i<=n; i++)
  {
      if(n%i==0)
      {
          cout<<i<<" ";
      }
  }
}
