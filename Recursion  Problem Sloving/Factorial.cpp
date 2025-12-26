#include<iostream>

using namespace std;

int factorial(int num)
{
    if(num==1)
        return 1;
    else
        return num*factorial(num-1);
}

int main()
{
    int num;
   cout<<"\n\nFactorial Num of :";
   cin>>num;
   cout<<"\n\nFactorial Num of :"<<num<<" is: "<<factorial(num);
}


