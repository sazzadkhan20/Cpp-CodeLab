#include<iostream>
#include<conio.h>

using namespace std;

int x =10;  //Global Variable

int display()
{
    cout<<::x;
}

int main()
{
    int x = 20;   //Local Variable
    ::x =50;
    //cout<<::x;    //::--Scope Resulation
    display();

    getch();
}
