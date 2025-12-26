#include<iostream>

using namespace std;

int main()
{
    //long bin_num;
    string bina_num,hex_num="",hexadec_num="";
    int sum=0,r=1;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    //int position[]={0,1,2,4,8};
    cout<<"Input a binary Number: ";
    cin>>bina_num;
    //bina_num=to_string(bin_num);
    bina_num="000"+bina_num;
    for(int i=bina_num.length()-1; i>=0; i--)
    {
        hexadec_num=bina_num[i]+hexadec_num;
        if(hexadec_num.length()==4)
        {
            for(int j=hexadec_num.length()-1; j>=0; j--)
            {
               sum=sum+((static_cast<int>(hexadec_num[j])-48)*r);
               r=r*2;
               if(j==0)
               {
                  hex_num=hex[sum]+hex_num;
                  hexadec_num="";
                  r=1;
                  sum=0;
               }
            }
        }
    }
    cout<<"\n\nThe hexadecimal value: "<<hex_num;
}
/*#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int hex[1000];
  int i = 1, j = 0, rem, dec = 0, binaryNumber;
	cout << "\n\n Convert a binary number to hexadecimal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber > 0)
  {
   rem = binaryNumber % 2;
   dec = dec + rem * i;
   i = i * 2;
   binaryNumber = binaryNumber / 10;
  }
   i = 0;
  while (dec != 0)
  {
   hex[i] = dec % 16;
   dec = dec / 16;
   i++;
  }
  cout<<" The hexadecimal value: ";
  for (j = i - 1; j >= 0; j--)
  {
   if (hex[j] > 9)
   {
    cout<<(char)(hex[j] + 55)<<"\n";
   }
   else
   {
    cout<<hex[j]<<"\n";
   }
  }
}*/
