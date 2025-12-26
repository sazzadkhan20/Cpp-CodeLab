#include<iostream>

using namespace std;

struct Person
{
    string name;
    Person *child;
};

int main()
{
    Person p,*c;
    p.name="Akbar Ali";
    c = p.child = new Person [2];
    c[0].name = "Zohurul Islam";
    c[0].child =NULL;
    c[1].name = "Aminul Islam";
    c=c[1].child = new Person;
    c->name = "Shopno";
    c->child=NULL;

}
