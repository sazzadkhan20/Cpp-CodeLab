#include <iostream>
using namespace std;
class A
{
private :
    string name ;
    int age;
    //friend class B; Here also can define friend class
public:
    A(string name,int age)
    {
       this -> name = name;
       this -> age = age;
    }
     friend class B;
};
class B
{
public:
    void display(A obj)
    {
        cout<<"Name: "<<obj.name<<"  "<<"Age: "<<obj.age<<endl;
    }
};

int main()
{
    A ob("MD. Sazzad",23);
    B obj;
    obj.display(ob);

}
