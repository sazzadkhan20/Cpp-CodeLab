#include<iostream>

using namespace std;

int main()
{
    int deci_num,r;
    string hexadeci_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    cout<<"Input a decimal number: ";
    cin>>deci_num;
    while(deci_num!=0)
    {
      r=deci_num%16;
      deci_num=deci_num/16;
      hexadeci_num=hex[r]+hexadeci_num;
    }
    cout<<"\n\nThe hexadecimal number is : "<<hexadeci_num;
}

/*#include<iostream>

using namespace std;

int main()
{
    int n,a;
    string s="";//ulta output (s=to_string(a)+s;)
    cout<<"Input a decimal number: ";
    cin>>n;
    while(n!=0)
    {
        a=n%16;
        n=n/16;
        if(a==10)
        {
          s="A"+s;
        }
        else if(a==11)
        {
           s="B"+s;
        }
        else if(a==12)
        {
           s="C"+s;
        }
        else if(a==13)
        {
            s="D"+s;
        }
        else if(a==14)
        {
           s="E"+s;
        }
        else if(a==15)
        {
            s="F"+s;
        }
        else
        {
           s=to_string(a)+s;
        }
    }
     cout<<"\n\nThe hexadecimal number is : "<<s;

}*/
