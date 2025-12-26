#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long oct_num;
    int deci_num=0,r,j=0;
    cout<<"Input a Octal Number: ";
    cin>>oct_num;
    while(oct_num!=0)
    {
       r =oct_num%10;
       oct_num=oct_num/10;
       deci_num=deci_num+(r*pow(8,j));
       j++;
    }
    cout<<"\n\nThe Decimal Number: "<<deci_num;

}
