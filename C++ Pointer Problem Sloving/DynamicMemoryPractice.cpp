#include<iostream>

using namespace std;

int ** func()
{
     int *p = new int;
    *p = 100;
    cout<<&p<<endl;
    //return p;
    //int **p1 = &p;
    //return p1;
    return &p;
}

int main()
{
    //int x=10;
    /*int *p = new int;
    *p = 100;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    float *p2 = new float;
    *p2 = 500;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<&p2<<endl;*/
   // int *p =func();
    //cout<<p<<endl;
    int **p = func();
    cout<<p<<endl;
    //cout<<*p<<endl;
    //cout<<*p<<endl;
    //delete a;

}
