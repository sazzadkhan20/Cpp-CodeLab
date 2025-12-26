#include<iostream>

using namespace std;
class MobileUser
{
public:
    void call()
    {
        cout<<"\n\nCall me";
    }
   virtual void send_message() = 0;
};
class R : public MobileUser
{

public:
    void send_message()
    {
        cout<<"\n\nHi,I am R";
    }
};
class K : public MobileUser
{

public:
    void send_message()
    {
        cout<<"\n\nHi,I am K";
    }
};

int main()
{
    MobileUser *m;
    R obj1;
    m = &obj1;
    m->send_message();
    m->call();
    K obj2;
    m = &obj2;
    m->send_message();
    m->call();

}
