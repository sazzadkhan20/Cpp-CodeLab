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

int main()
{
    Student rahim(100,3.99);
    rahim.roll = 01;
    rahim.cgpa = 2.99;
    rahim.show_info();
} 