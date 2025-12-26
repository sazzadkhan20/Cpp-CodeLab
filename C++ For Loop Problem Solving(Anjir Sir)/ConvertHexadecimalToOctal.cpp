#include<iostream>

using namespace std;

int main()
{
    string hex_num;
    cout<<"Input a Hexadecimal Number: ";
    cin>>hex_num;
    int hex_bin_num[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int bin_num=0,base=1;
    for(int i=hex_num.length()-1; i>=0; i--)
    {
        for(int j=0; j<16; j++)
        {
            if(hex_num[i]==hex[j]){
              bin_num+=hex_bin_num[j]*base;
              base*=10000;
           }
       }
     }
     string temp_bina_num="00"+to_string(bin_num);
     string oct_num="",temp_bin_num="";
     for(int i=temp_bina_num.length()-1; i>=0; i--)
     {
         temp_bin_num=temp_bina_num[i]+temp_bin_num;
         if(temp_bin_num.length()==3)
         {
             int sum=0,counter=1;
            for(int j=temp_bin_num.length()-1; j>=0; j--)
            {
                sum+=(static_cast<int>(temp_bin_num[j])-48)*counter;
                counter=counter*2;
                if(j==0)
                {
                    oct_num=to_string(sum)+oct_num;
                    temp_bin_num="";
                }
            }
         }
     }
        cout<<"\n\nThe Octal Number: "<<oct_num;
}
