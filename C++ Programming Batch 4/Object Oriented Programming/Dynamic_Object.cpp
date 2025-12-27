#include<bits/stdc++.h>

using namespace std;

class Student
{
   public:
   int roll;
   double cgpa;
   Student()
   {
     cout<<"I am Student\n";
   }
   Student(int roll,double cgpa)
   {
     (*this).roll = roll ;//this -> roll = roll;
     (*this).cgpa = cgpa ;//this -> cgpa = cgpa;
   }
   
   void show_info()
   {
     cout<< roll <<" " << cgpa << endl;
   }
};

Student* fun()
{
   Student * rahim = new Student;
   return rahim;
}

int main()
{
    Student* rahim = fun();
    (*rahim).roll = 1; // rahim -> roll = 1;
    rahim -> cgpa = 2.99;
    rahim->show_info();
} 