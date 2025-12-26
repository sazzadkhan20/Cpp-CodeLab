#include<iostream>

using namespace std;

int main()
{
    string s1,s2="",s3="";
    int b=1;
    cout<<"Input Binary Value: ";
    cin>>s1;
    cout<<endl<<endl<<"The original binary = "<<s1<<endl<<endl;
    cout<<"After ones complement the value = ";
    for(int i=0; i<s1.length(); i++)
    {
       int a = static_cast<int>(s1[i])-48;
       if(a==1)
       {
         s2=s2+to_string(0);
       }
       else
       {
           s2=s2+to_string(1);
       }
    }
    cout<<s2<<endl<<endl<<"After twos complement the value = ";
    for(int i=s2.length()-1; i>=0; i--)
    {
        int c =static_cast<int>(s2[i])-48;
       if(b==1)
       {
          if(c==1)
          {
             s3=s3+to_string(0);
             b=1;
          }
          else
          {
             s3=s3+to_string(1);
             b=0;
          }
       }
       else
       {
          s3=s3+to_string(c);
          b=0;
       }
    }
    for(int i=s3.length()-1; i>=0; i--)
    {
        cout<<s3[i];
    }
}
