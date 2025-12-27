#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int mark;
    void show_info()
    {
        cout<<name<<" "<<roll<<" "<<mark<<endl;
    }

};

bool cmp(Student s1,Student s2)
{
    // if(s1.mark <= s2.mark)
    // {
    //    return true;
    // }
    // else
    // {
    //     return false;
    // }

    //return s1.mark >= s2.mark;
    //  if(s1.mark > s2.mark)
    //  {
    //     return true;
    //  }
    //  else if(s1.mark < s2.mark)
    //  {
    //     return false;
    //  }
    //  else
    //  {
    //     // if(s1.roll < s2.roll)
    //     // {
    //     //     return true;
    //     // }
    //     // else
    //     // {
    //     //     return false;
    //     // }
    //     return s1.roll < s2.roll;
    //  }

    if(s1.mark == s2.mark)
    {
        return s1.roll < s2.roll;
    }
    else
    {
        return s1.mark > s2.mark;
    }

}

int main()
{
    int n;
    cin>>n;
   Student *s = new Student[n];
    //Student s[n];

   for(int i=0; i<n; i++)
   {
       cin.ignore();
       getline(cin,s[i].name);
       int roll,mark;
       cin>>s[i].roll>>s[i].mark;
       
   }

   sort(s,s+n,cmp);

   for(int i=0; i<n; i++)
   {
      s[i].show_info();
   }
}