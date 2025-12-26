#include<iostream>

using namespace std;
class Persion
{
private:
    string name;
    int age;
public:
    Persion(string na,int ag): name(na),age(ag){
    }

   virtual void display()
    {
        cout<<"\n\nThis is Persion Class";
    }
};
class Student : public Persion
{
private :
    int id;
public:
    Student(string na,int ag,int id): Persion(na,ag),id(id){
    }
    void display()
    {
        cout<<"\n\nThis is Student Class";
    }
};
class Teacher : public Persion
{
private :
    int nid;
public:
    Teacher(string na,int ag,int nid): Persion(na,ag),nid(nid){
    }
    void display()
    {
        cout<<"\n\nThis is Teacher Class";
    }
};

int main()
{
    Persion *p;
    //p.display();

    Student s("SS",12,25487);
    p = &s;
    p->display();
    Teacher t("SS",12,3654);
    p = &t;
    p->display();

}
