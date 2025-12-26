#include<iostream>

using namespace std;

int main()
{
    int number1,number2,number3;
    cout<<"Input the 3 numbers: \n";
    cin>>number1;
    cin>>number2;
    cin>>number3;
    int HCF=0;
    for(int i=1; i<=number1; i++)
    {
        //check every single digit can divide the numbers and store highest number
        if(number1%i==0 && number2%i==0 && number3%i==0 && i>HCF)
        {
            HCF=i;
        }
    }
    //int LCM =(number1*number2*number3)/storing_number_by_multiple;
    cout<<"\n\nThe HCF is: "<<HCF;
    //cout<<"\n\nThe LCM is: "<<LCM;NNNNNNNNN
}
