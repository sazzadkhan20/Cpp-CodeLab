#include<bits/stdc++.h>

using namespace std;

class Person
{
  public: 
   string name;
   int age;
   Person(string n,int a)
   {
     name = n;
     age = a;
   }
};

int main()
{
    // Static Object Copy ---

    /* Person p1("Rakib",20);
     Person p2("Sakib",25);
     p1 = p2;
     cout<<p1.name<<" "<<p1.age;*/

     // Dynamic Object Copy ---

    Person *p1 = new Person("Rakib",20);
    Person *p2 = new Person("Sakib",15);
    *p1 = *p2;
    delete p2;
    cout<<p1->name<<" "<<p1->age;
}