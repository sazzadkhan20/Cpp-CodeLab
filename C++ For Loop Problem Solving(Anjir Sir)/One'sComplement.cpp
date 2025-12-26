#include<iostream>

using namespace std;

int main()
{
    string s;
    cout<<"Input a binary value: ";
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
      int a =static_cast<int>(s[i])-48;

       if(a==1)
       {
         cout<<"0";
       }
       else
       {
          cout<<"1";
       }

    }


}
