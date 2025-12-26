#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,a;
    string s;
    string s1="";
    cout<<"Input any number: ";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        s1 =s1+to_string(a);
    }
    n = stoi(s1);
    while(n!=0)
    {
       a=n%10;
       n=n/10;
       if(a==0)
        {
            s+="Zero ";
        }
        else if(a==1)
        {
            s+="One ";
        }
        else if(a==2)
        {
            s+="Two ";
        }
        else if(a==3)
        {
            s+="Three ";
        }
        else if(a==4)
        {
            s+="Four ";
        }
        else if(a==5)
        {
            s+="Five ";
        }
        else if(a==6)
        {
            s+="Six ";
        }
        else if(a==7)
        {
            s+="Seven ";
        }
        else if(a==8)
        {
            s+="Eight ";
        }
        else if(a==9)
        {
            s+="Nine ";
        }
    }
  cout<<endl<<endl<<s<<endl<<endl;
}
