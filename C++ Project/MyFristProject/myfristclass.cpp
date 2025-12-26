#include "myfristclass.h"
#include<iostream>
using namespace std;

MyFristClass::MyFristClass()
{
    cout<<"\n\nThis is Constractor";
}
MyFristClass::MyFristClass(int a,int b)
{
    cout<<"\n\nThis is Parameter Constractor";
}
MyFristClass::~MyFristClass()
{
    cout<<"\n\nThis is Destractor";
}
void MyFristClass::display1() const
{
    cout<<"\n\nThis is Display1";
}
void MyFristClass::display2()
{
    cout<<"\n\nThis is Display2";
}
