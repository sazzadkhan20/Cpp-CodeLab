#include<iostream>

using namespace std;

int main()
{
    int dec_num,r;
    string oct_num="";
    cout<<"Input a decimal number: ";
    cin>>dec_num;
    while(dec_num!=0)
    {
        r=dec_num%8;
        dec_num=dec_num/8;
        oct_num=to_string(r)+oct_num;
    }
    cout<<"\n\nThe octal number is: "<<oct_num;
}
