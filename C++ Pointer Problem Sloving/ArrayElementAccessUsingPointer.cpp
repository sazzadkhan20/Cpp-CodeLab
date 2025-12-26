/*#include <iostream>

using namespace std;

int main()
{
    int a[4] = {10,20,30,40};

    cout<<"  "<<a<<endl;
    cout<<"  "<<*a<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<"  "<<(a+i)<<endl;
        cout<<"  "<<*(a+i)<<endl;
    }

}*/


#include <iostream>

using namespace std;

int main()
{
    int a[4] = {10,20,30,40};
    int *p = a;
    /*int b =10;
    int a =20;
    p = &b;
    cout<<p<<endl;
    //p++ = &a; Not Accepted
    ++p = &a;
    cout<<b<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    p--;
    cout<<p<<endl;
    cout<<*p<<endl;*/

    //p = &a[0];
     cout<<"  "<<p[0]<<endl;
     cout<<"  "<<p[1]<<endl;
     cout<<"  "<<p[2]<<endl;
     cout<<"  "<<*(p+2)<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"  "<<*p<<endl;
        cout<<"  "<<p<<endl;
        p++;
    }

}
