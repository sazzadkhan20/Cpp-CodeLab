#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int mark;
    Student(string n,int r,int m)
    {
        name = n;
        roll = r;
        mark = m;
    }
    void show_info()
    {
        cout<<name<<" "<<roll<<" "<<mark<<endl;
    }

};

int main()
{
    int n;
    cin>>n;
   Student *s = new Student[n];
    //Student s[n];

   for(int i=0; i<n; i++)
   {
       string name;
       cin.ignore();
       getline(cin,name);
       int roll,mark;
       cin>>roll>>mark;
       s[i] = Student(name,roll,mark);
       
   }

   for(int i=0; i<n; i++)
   {
      s[i].show_info();
   }
}