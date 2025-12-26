#include<iostream>

using namespace std;

int main()
{
    int number1,number2,number3;
    cout<<"Input the 3 numbers: \n";
    cin>>number1;
    cin>>number2;
    cin>>number3;
    int store_number1,store_number2,store_number3=1,remainder=1;
    //cout<<remainder<<endl;
    if(number1>number2)
    {
      store_number1=number1;
      store_number2=number2;
    }
    else
    {
      store_number1=number2;
      store_number2=number1;
    }
    while(remainder!=0)
    {
        remainder=store_number1%store_number2;
        store_number1=store_number2;
        store_number2=remainder;
    }
    int temp_LCM=(number1*number2)/store_number1;
    remainder=1;
    if(temp_LCM>number3)
    {
        store_number1=temp_LCM;
       store_number2=number3;
    }
    else
    {
        store_number1=number3;
       store_number2=temp_LCM;
    }
    while(remainder!=0)
    {
       remainder=store_number1%store_number2;
        store_number1=store_number2;
        store_number2=remainder;
    }
    int LCM=(temp_LCM*number3)/store_number1;
    cout<<LCM;
}
