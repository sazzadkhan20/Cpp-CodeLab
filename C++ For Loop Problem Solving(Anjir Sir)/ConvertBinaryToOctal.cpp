#include<iostream>

using namespace std;

int main()
{
    string bin_num,oct_num="",octal_num="";
    int sum=0,r=1;
    cout<<"Input a Binary Number: ";
    cin>>bin_num;
    bin_num="00"+bin_num;
    for(int i=bin_num.length()-1; i>=0; i--)
    {
        oct_num=bin_num[i]+oct_num;
        if(oct_num.length()==3)
        {
            for(int j=oct_num.length()-1; j>=0; j--)
            {
              sum=sum+((static_cast<int>(oct_num[j])-48)*r);
              r=r*2;
              if(j==0)
              {
                  octal_num=to_string(sum)+octal_num;
                  oct_num="";
                  sum=0;
                  r=1;
              }
            }
        }
    }
    cout<<"\n\nThe Octal Number: "<<octal_num;
}
