/*#include<iostream>

using namespace std;

int main()
{
    string hex_num;
    cout<<"Input a Hexadecimal Number: ";
    cin>>hex_num;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int bin_num=0,base=1;
    for(int i=hex_num.length()-1; i>=0; i--)
    {
        int bin_dig=0,tempBase=1;
        for(int j=0; j<16; j++)
        {
            if(hex_num[i]==hex[j]){
             int r=j;
           while(r>0)
           {
             int bina_rem=r%2;
             r/=2;
             bin_dig+=bina_rem*tempBase;
             tempBase*=10;
           }
       }
     }
     bin_num+=bin_dig*base;
     base*=10000;
    }
        cout<<"\n\nThe Binary Number: "<<bin_num;
}*/

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
        cout<<"\n\nThe Binary Number: "<<bin_num;
}
