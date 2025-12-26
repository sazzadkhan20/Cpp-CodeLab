#include <iostream>
using namespace std;
class A
{
public:
     A()
    {
        cout<<"A Class"<<endl;
    }
    void display1() const
    {
        cout<<"Display1 "<<endl;
    }
    void display2()
    {
        cout<<"Display2 "<<endl;
    }
};

int main()
{
    const A obj;
    obj.display1();
    //obj.display2();
}
