#include <iostream>
using namespace std;

class persion {
private:
    string name;
    int age;

public:
    persion(string name, int age) : name(name), age(age) {
    }

    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }
};
class B
{
private:
    int sec;
public:
    B(int se):sec(se)
    {

    }
    int get_sec() {
        return sec;
    }
};

class student : public persion,B {
private:
    int id;

public:
    student(string name, int age, int id,int sec) : persion(name, age), id(id),B(sec) {
    }

    void display() {
        cout << "Name: " << get_name() << endl;
        cout << "Age: " << get_age() << endl;
        cout << "ID: " << id << endl;
        cout << "Section No: " << get_sec() << endl;
    }
};

int main() {
    student obj("MD. Sazzad", 23, 225885,14);
    obj.display();
}



/*#include <iostream>
using namespace std;
class persion
{
private :
    string name ;
    int age;
public:
    persion(string name,int age)
    {
       this -> name = name;
       this -> age = age;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
};
class student : public persion
{
private:
    int id;
public:
    student(string name,int age,int id): persion(name,age)
    {
       this -> id = id;
    }
    void display()
    {
        cout<<"Name :"<<get_name()<<endl;
        cout<<"Age :"<<get_age()<<endl;
        cout<<"id :"<<id<<endl;
    }
};

int main()
{
    student obj("MD. Sazzad",23,225885);
    //student obj;
    obj.display();

}*/
