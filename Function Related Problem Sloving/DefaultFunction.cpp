#include<iostream>

using namespace std;

//default Function
int addition(int a=10,int b=20,int c=15)
{
    return a+b+c;
}

int main()
{
   cout<<addition(35,10)<<endl;
   cout<<addition();
}

