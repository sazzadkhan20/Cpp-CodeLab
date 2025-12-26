#include <iostream>

using namespace std;

void swapping (int *p1,int *p2)
{
   int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a =10,b=12;
    int *p1 ,*p2;
    p1 = &a;
    p2 = &b;
    //Not good Practice
    /*int *p;
    *p = a;*/
    cout<<"  "<<(*p1+*p2)<<endl;
    cout<<"  "<<a<<endl;
    cout<<"  "<<&a<<endl;
    cout<<"  "<<p1<<endl;
    cout<<"  "<<*p1<<endl;
    cout<<"  "<<&p1<<endl;
    *p1 = 20;
    cout<<" "<<a<<endl;
    p1 = &b;
    cout<<" "<<*p1<<endl;
    //Swiping numbers
     swapping(&a,&b);
    cout<<" "<<a<<endl;
    cout<<" "<<b<<endl;
    //cout<<" "<<&p1<<endl;
    //cout<<" "<<p1<<endl;
}
