/*#include<iostream>

using namespace std;

int main()
{
    long oct_num;
    cout<<"Input a Octal Number: ";
    cin>>oct_num;
    int bin_num=0,base=1;
    int temp_oct_num=(int)oct_num;
    while(oct_num>0)
    {
        int rem=oct_num%10;
        oct_num/=10;
        int bin_dig=0,tempBase=1;
        while(rem>0)
        {
            int bin_rem=rem%2;
            rem/=2;
            bin_dig+=bin_rem*tempBase;
            tempBase*=10;
        }
        bin_num+=bin_dig*base;
        base*=1000;
    }
    string bina_num="000"+to_string(bin_num);
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string hex_num="",temp_bin_num="";
    for(int i=bina_num.length()-1; i>=0; i--)
    {
        temp_bin_num=bina_num[i]+temp_bin_num;
        int counter=1,sum=0;
        if(temp_bin_num.length()==4)
        {
            for(int j=temp_bin_num.length()-1; j>=0; j--)
            {
                sum+=(static_cast<int>(temp_bin_num[j])-48)*counter;
                counter=counter*2;
                if(j==0)
                {
                    hex_num=hex[sum]+hex_num;
                    temp_bin_num="";
                }
            }
        }
    }
    cout<<"\n\nThe HexaDecimal value of "<<temp_oct_num<<" is : "<<hex_num;

}*/

/*#include<iostream>

using namespace std;

int main()
{
    long oct_num;
    int rem1,rem2;
    string bin_num="";
    cout<<"Input a Octal Number: ";
    cin>>oct_num;
    long temp_oct_num=oct_num;
    while(oct_num!=0)
    {
      rem1=oct_num%10;
      oct_num/=10;
      if(rem1==0)
      {
          bin_num="000"+bin_num;
      }
      else if(rem1==1)
      {
           bin_num="001"+bin_num;
      }
      else if(rem1==2)
      {
           bin_num="010"+bin_num;
      }
      else if(rem1==3)
      {
           bin_num="011"+bin_num;
      }
      else
      {
      while(rem1!=0)
      {
          rem2=rem1%2;
          rem1/=2;
          bin_num=to_string(rem2)+bin_num;
      }
      }
    }
    string bina_num="000"+bin_num;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string hex_num="",temp_bin_num="";
    for(int i=bina_num.length()-1; i>=0; i--)
    {
        temp_bin_num=bina_num[i]+temp_bin_num;
        int counter=1,sum=0;
        if(temp_bin_num.length()==4)
        {
            for(int j=temp_bin_num.length()-1; j>=0; j--)
            {
                sum+=(static_cast<int>(temp_bin_num[j])-48)*counter;
                counter=counter*2;
                if(j==0)
                {
                    hex_num=hex[sum]+hex_num;
                    temp_bin_num="";
                }
            }
        }
    }
    cout<<"\n\nThe Hexadecimal Number of "<<temp_oct_num<<" is: "<<hex_num;
}*/
#include<iostream>

using namespace std;

int main()
{
    int oct_num,temp_oct_num;;
    cout<<"Input a Octal Number: ";
    cin>>oct_num;
    int octal_num[]={0,1,10,11,100,101,110,111};
    int bin_num=0,base=1;
    temp_oct_num=oct_num;
    while(oct_num>0)
    {
        int rem=oct_num%10;
        oct_num/=10;
        bin_num+=octal_num[rem]*base;
        base*=1000;
    }
    string bina_num="000"+to_string(bin_num);
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string hex_num="",temp_bin_num="";
    for(int i=bina_num.length()-1; i>=0; i--)
    {
        temp_bin_num=bina_num[i]+temp_bin_num;
        int counter=1,sum=0;
        if(temp_bin_num.length()==4)
        {
            for(int j=temp_bin_num.length()-1; j>=0; j--)
            {
                sum+=(static_cast<int>(temp_bin_num[j])-48)*counter;
                counter=counter*2;
                if(j==0)
                {
                    hex_num=hex[sum]+hex_num;
                    temp_bin_num="";
                }
            }
        }
    }
    cout<<"\n\nThe HexaDecimal value of "<<temp_oct_num<<" is : "<<hex_num;
}
