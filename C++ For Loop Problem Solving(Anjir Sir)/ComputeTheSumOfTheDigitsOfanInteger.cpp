/*#include<iostream>

using namespace std;

int main()
{
    int number,sum=0;
    cout<<"Input an integer: ";
    cin>>number;
    int storingNumber=number;
    while(number>0)
    {
        int remainder =number%10;
        number/=10;
        sum+=remainder;
    }
    cout<<"\n\nThe sum of the digits of the number "<<storingNumber<<" is: "<<sum;
}*/

#include<iostream>

using namespace std;

int sumofTheDigitsOfanInteger(int number)
{
    int sum=0;
    while(number>0)
    {
        //get last digit of the integer
        int remainder =number%10;
        number/=10;
        sum+=remainder;
    }
    return sum;
}

int main()
{
    int number;
    cout<<"Input an integer: ";
    cin>>number;

    cout<<"\n\nThe sum of the digits of the number "<<number<<" is: "<<sumofTheDigitsOfanInteger(number);
}
