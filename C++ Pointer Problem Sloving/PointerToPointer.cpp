#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int *p;
    p = &a;
    int **q = &p;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    //*p++;/*(p++);
    (*p)++;//++*p;
    cout<<*p<<endl;
    cout<<"  "<<a<<endl;
}
